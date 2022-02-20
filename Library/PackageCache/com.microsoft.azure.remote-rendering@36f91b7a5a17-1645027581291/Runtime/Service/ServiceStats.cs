﻿using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace Microsoft.Azure.RemoteRendering
{
    /// <summary>
    /// This class provides statistics about the video stream from the service.
    /// <para>The instance needs to be updated every frame to produce averages.</para>
    /// </summary>
    public class ServiceStatistics
    {
        public struct AggregatedStatistics
        {
            public float TimeSinceLastPresentAvg;
            public float TimeSinceLastPresentMax;
            public int VideoFramesSkipped;
            public int VideoFramesReused;
            public int VideoFramesReceived;
            public float VideoFrameMinDelta;
            public float VideoFrameMaxDelta;
            public float LatencyPoseToReceiveAvg;
            public float LatencyReceiveToPresentAvg;
            public float LatencyPresentToDisplayAvg;
            public int VideoFramesDiscarded;
            public int VideoFramesDiscardedTotal;
            public int FramesUsedForAverage;

            public PerformanceAssessment CurrentPerformanceAssessment;

            public override string ToString()
            {
                return $"Render: {FramesUsedForAverage} fps - {(TimeSinceLastPresentAvg * 1000).ToString("F2")} / {(TimeSinceLastPresentMax * 1000).ToString("F2")} ms (avg / max)\r\n"
                + $"Video frames: {VideoFramesSkipped} / {VideoFramesReused} / {VideoFramesReceived} skipped / reused / received\r\n"
                + $"Video frames delta: {(VideoFrameMinDelta * 1000).ToString("F2")} / {(VideoFrameMaxDelta * 1000).ToString("F2")} ms (min / max)\r\n"
                + $"Latency: {(LatencyPoseToReceiveAvg * 1000).ToString("F2")} / {(LatencyReceiveToPresentAvg * 1000).ToString("F2")} / {(LatencyPresentToDisplayAvg * 1000).ToString("F2")} ms (avg) pose/receive/display  \r\n"
                + $"Video frames discarded: {VideoFramesDiscarded} / {VideoFramesDiscardedTotal} frames (last sec / total)\r\n"
                + $"Frame time CPU/GPU: {CurrentPerformanceAssessment.TimeCpu.Aggregate.ToString("F2") } ms ({CurrentPerformanceAssessment.TimeCpu.Rating}) / {CurrentPerformanceAssessment.TimeGpu.Aggregate.ToString("F2")} ms ({CurrentPerformanceAssessment.TimeGpu.Rating})\n"
                + $"Utilization CPU/GPU: {CurrentPerformanceAssessment.UtilizationCpu.Aggregate.ToString("F2") } % ({CurrentPerformanceAssessment.UtilizationCpu.Rating}) / {CurrentPerformanceAssessment.UtilizationGpu.Aggregate.ToString("F2")} % ({CurrentPerformanceAssessment.UtilizationGpu.Rating})\n"
                + $"Memory CPU/GPU: {CurrentPerformanceAssessment.MemoryCpu.Aggregate.ToString("F2") } % ({CurrentPerformanceAssessment.MemoryCpu.Rating}) / {CurrentPerformanceAssessment.MemoryGpu.Aggregate.ToString("F2")} % ({CurrentPerformanceAssessment.MemoryGpu.Rating})\n"
                + $"Network roundtrip: {CurrentPerformanceAssessment.NetworkLatency.Aggregate.ToString("F2") } ms ({CurrentPerformanceAssessment.NetworkLatency.Rating})\n"
                + $"Polygons rendered: {CurrentPerformanceAssessment.PolygonsRendered.Aggregate.ToString("N0")} ({CurrentPerformanceAssessment.PolygonsRendered.Rating})";
            }
        }

        private double _currWindowStartTime = DateTime.Now.TimeOfDay.TotalSeconds;
        private int _videoFramesDiscardedTotal = 0;
        private List<FrameStatistics> _currWindowFrameStats = new List<FrameStatistics>();
        private List<FrameStatistics> _lastWindowFrameStats = new List<FrameStatistics>();
        private Task<PerformanceAssessment> m_runningPerformanceAssesment;
        private PerformanceAssessment m_lastPerformanceAssessment = new PerformanceAssessment();

        /// <summary>
        /// Call every frame to collect statistics for given frame from the graphics binding.
        /// </summary>
        public void Update(RenderingSession session)
        {
            UpdateStats(session);
        }

        /// <summary>
        /// Get statistics for last second of the video stream.
        /// </summary>
        public AggregatedStatistics GetAggregatedResult()
        {
            AggregatedStatistics s = new AggregatedStatistics();

            foreach (FrameStatistics frameStatistics in _lastWindowFrameStats)
            {
                s.TimeSinceLastPresentAvg += frameStatistics.TimeSinceLastPresent;
                s.TimeSinceLastPresentMax = Math.Max(s.TimeSinceLastPresentMax, frameStatistics.TimeSinceLastPresent);

                s.VideoFramesSkipped += frameStatistics.VideoFramesSkipped;
                s.VideoFramesReused += frameStatistics.VideoFrameReusedCount > 0 ? 1 : 0;
                s.VideoFramesReceived += frameStatistics.VideoFramesReceived;

                if (frameStatistics.VideoFramesReceived > 0)
                {
                    if (s.VideoFrameMinDelta == 0.0f)
                    {
                        s.VideoFrameMinDelta = frameStatistics.VideoFrameMinDelta;
                        s.VideoFrameMaxDelta = frameStatistics.VideoFrameMaxDelta;
                    }
                    else
                    {
                        s.VideoFrameMinDelta = Math.Min(s.VideoFrameMinDelta, frameStatistics.VideoFrameMinDelta);
                        s.VideoFrameMaxDelta = Math.Max(s.VideoFrameMaxDelta, frameStatistics.VideoFrameMaxDelta);
                    }
                }

                s.LatencyPoseToReceiveAvg += frameStatistics.LatencyPoseToReceive;
                s.LatencyReceiveToPresentAvg += frameStatistics.LatencyReceiveToPresent;
                s.LatencyPresentToDisplayAvg += frameStatistics.LatencyPresentToDisplay;
                s.VideoFramesDiscarded += frameStatistics.VideoFramesDiscarded;
            }

            int frameStatsCount = _lastWindowFrameStats.Count;
            if (frameStatsCount > 0)
            {
                s.TimeSinceLastPresentAvg /= (float)frameStatsCount;
                s.LatencyPoseToReceiveAvg /= (float)frameStatsCount;
                s.LatencyReceiveToPresentAvg /= (float)frameStatsCount;
                s.LatencyPresentToDisplayAvg /= (float)frameStatsCount;
            }
            s.VideoFramesDiscardedTotal = _videoFramesDiscardedTotal;
            s.FramesUsedForAverage = frameStatsCount;

            s.CurrentPerformanceAssessment = m_lastPerformanceAssessment;

            return s;
        }

        /// <summary>
        /// Utility call to get the statistics in formatted string.
        /// </summary>
        public string GetStatsString()
        {
            AggregatedStatistics s = GetAggregatedResult();
            return s.ToString();
        }

        private void UpdateStats(RenderingSession session)
        {
            if (!session.IsConnected)
            {
                return;
            }

            if (session.GraphicsBinding.GetLastFrameStatistics(out FrameStatistics frameStatistics) != Result.Success)
            {
                return;
            }

            if (m_runningPerformanceAssesment == null)
            {
                m_runningPerformanceAssesment = session.Connection.QueryServerPerformanceAssessmentAsync();
            }
            else if (m_runningPerformanceAssesment.IsCompleted)
            {
                m_lastPerformanceAssessment = m_runningPerformanceAssesment.Result;
                m_runningPerformanceAssesment = null;
            }

            // If 1 second has passed, clear the last stats list.
            var now = DateTime.Now.TimeOfDay.TotalSeconds;
            if (now > _currWindowStartTime + 1)
            {
                System.Diagnostics.Debug.Assert(!ReferenceEquals(_lastWindowFrameStats, _currWindowFrameStats));
                Swap(ref _lastWindowFrameStats, ref _currWindowFrameStats);
                _currWindowFrameStats.Clear();

                // Next list clearing should happen at least 1 second from now
                do
                {
                    _currWindowStartTime += 1;
                } while (now > _currWindowStartTime + 1);
            }

            _currWindowFrameStats.Add(frameStatistics);
            _videoFramesDiscardedTotal += frameStatistics.VideoFramesDiscarded;
        }

        private static void Swap<T>(ref T left, ref T right)
        {
            T t = left;
            left = right;
            right = t;
        }
    }
}

