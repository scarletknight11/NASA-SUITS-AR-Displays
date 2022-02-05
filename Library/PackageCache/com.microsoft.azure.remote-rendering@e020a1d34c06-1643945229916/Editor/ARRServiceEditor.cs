using UnityEditor;
using Microsoft.Azure.RemoteRendering.Unity;
using Microsoft.Azure.RemoteRendering;
using UnityEngine;
using System;

using UnityEditor.Experimental.SceneManagement;
using UnityEditor.SceneManagement;

[CustomEditor(typeof(ARRServiceUnity))]
public class ARRServiceEditor : Editor
{
    private GUIStyle boldText = null;
    private SerializedProperty m_AutoRenewLeaseProperty;
    private SerializedProperty m_AutoRenewLeaseThresholdMinutesProperty;
    private SerializedProperty m_AutoRenewLeaseAmountMinutesProperty;
    private SerializedProperty m_AutoStopSessionProperty;

    private void OnEnable()
    {
        m_AutoRenewLeaseProperty = serializedObject.FindProperty("AutoRenewLease");
        m_AutoRenewLeaseThresholdMinutesProperty = serializedObject.FindProperty("_autoRenewLeaseThresholdMinutes");
        m_AutoRenewLeaseAmountMinutesProperty = serializedObject.FindProperty("_autoRenewLeaseAmountMinutes");
        m_AutoStopSessionProperty = serializedObject.FindProperty("AutoStopSession");
    }


    public override void OnInspectorGUI()
    {
        ARRServiceUnity service = target as ARRServiceUnity;
        var activeScene = PrefabStageUtility.GetCurrentPrefabStage() != null ? PrefabStageUtility.GetCurrentPrefabStage().scene : EditorSceneManager.GetActiveScene();

        if (boldText == null)
        {
            boldText = new GUIStyle(GUI.skin.label);
            boldText.fontStyle = FontStyle.Bold;
        }

        EditorGUILayout.PropertyField(m_AutoRenewLeaseProperty, new GUIContent("Auto-Renew Session", m_AutoRenewLeaseProperty.tooltip));
        EditorGUILayout.PropertyField(m_AutoRenewLeaseThresholdMinutesProperty, new GUIContent("Auto-Renew Session Threshold", m_AutoRenewLeaseThresholdMinutesProperty.tooltip));
        EditorGUILayout.PropertyField(m_AutoRenewLeaseAmountMinutesProperty, new GUIContent("Auto-Renew Session Amount", m_AutoRenewLeaseAmountMinutesProperty.tooltip));
        EditorGUILayout.PropertyField(m_AutoStopSessionProperty, new GUIContent("Auto-Stop Session", m_AutoStopSessionProperty.tooltip));

        serializedObject.ApplyModifiedProperties();

        // Display runtime info about account info used for the ARR Unity Session
        if ( Application.isPlaying )
        {
            GUILayout.Space(10.0f);
            GUILayout.Label("Runtime Account Info", boldText);
            EditorGUI.indentLevel++;
            DrawAccountInfo(service);
            EditorGUI.indentLevel--;

            GUILayout.Space(10.0f);
            GUILayout.Label("Runtime Session Info", boldText);
            EditorGUI.indentLevel++;
            DrawSessionInformation(service);
            EditorGUI.indentLevel--;

            GUILayout.Space(10.0f);
            GUILayout.Label("Runtime Connection Info", boldText);
            EditorGUI.indentLevel++;
            DrawConnectionInformation(service);
            EditorGUI.indentLevel--;

            GUILayout.Space(10.0f);
            var style = new GUIStyle(GUI.skin.button);
            style.stretchWidth = false;
            if (GUILayout.Button("Inspector", style))
            {
                service.OpenArrInspector();
            }
        }
    }

    private void DrawAccountInfo(ARRServiceUnity service)
    {
        if (service.Client != null)
        {
            var accntInfo = service.Client.Configuration;
            EditorGUILayout.LabelField("AccountId", accntInfo.AccountId);
            EditorGUILayout.LabelField("AccountKey", accntInfo.AccountKey);
            EditorGUILayout.LabelField("AccountDomain", accntInfo.AccountDomain);
            EditorGUILayout.LabelField("RemoteRenderingDomain", accntInfo.RemoteRenderingDomain);
            EditorGUILayout.LabelField("AccessToken", accntInfo.AccessToken);
            EditorGUILayout.LabelField("AuthenticationToken", accntInfo.AuthenticationToken);
        }
        else
        {
            EditorGUILayout.LabelField("No account information has been provided to the frontend.");
        }
    }

    private void DrawSessionInformation(ARRServiceUnity service)
    {
        if (service.CurrentActiveSession == null)
        {
            EditorGUILayout.LabelField("No active session");
        }
        else
        {
            var session = service.CurrentActiveSession;
            EditorGUILayout.LabelField("Host name", service.LastProperties.Hostname);
            if( session != null)
            {
                TimeSpan elapsedTime = new TimeSpan(service.LastProperties.ElapsedTimeInMinutes / 60, service.LastProperties.ElapsedTimeInMinutes % 60, 0);
                TimeSpan maxLeaseTime = new TimeSpan(service.LastProperties.MaxLeaseInMinutes / 60, service.LastProperties.MaxLeaseInMinutes % 60, 0);
                EditorGUILayout.LabelField("Id", session.SessionUuid);
                EditorGUILayout.LabelField("Elapsed time", elapsedTime.ToString());
                EditorGUILayout.LabelField("Max lease time", maxLeaseTime.ToString());
                EditorGUILayout.LabelField("Expiration time", service.ExpirationTime.ToLocalTime().ToString());
                EditorGUILayout.LabelField("Size", service.LastProperties.Size.ToString());
                EditorGUILayout.LabelField("Session status", service.LastProperties.Status.ToString());
                EditorGUILayout.LabelField("Session Message", service.LastProperties.Message?.ToString() ?? "None");
            }
            else
            {
                EditorGUILayout.LabelField("Session information is not available.");
            }

        }
    }

    private void DrawConnectionInformation(ARRServiceUnity service)
    {
        if( service.CurrentActiveSession != null)
        {
            EditorGUILayout.LabelField("Connection status", service.CurrentActiveSession.ConnectionStatus.ToString());
        }
    }
}
