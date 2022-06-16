using Microsoft.Azure.ObjectAnchors.Unity;
using UnityEngine;

public class MultiAnchorObjectPlacement : MonoBehaviour
{
    /// <summary>
    /// The node to use as the parent of all model-space content. Will be enabled/disaled depending on whether the placement is currently valid.
    /// </summary>
    public GameObject ModelSpaceContent;

    /// <summary>
    /// The surface coverage of the latest placement update.
    /// </summary>
    [HideInInspector]
    public float SurfaceCoverage => this._trackingResult?.SurfaceCoverage ?? 0;

    IObjectAnchorsTrackingResult _trackingResult = null;

    /// <summary>
    /// Updates the placement of the model to reflect the current state of the given detected instance.
    /// </summary>
    /// <param name="e"></param>
    public void UpdatePlacement(IObjectAnchorsTrackingResult trackingResult)
    {
        this._trackingResult = trackingResult;
    }

    private void Update()
    {
        Pose? modelInWorld = this._trackingResult?.TryComputeModelPoseForView(new Pose(Camera.main.transform.position, Camera.main.transform.rotation));
        if (modelInWorld.HasValue)
        {
            this.transform.SetPositionAndRotation(modelInWorld.Value.position, modelInWorld.Value.rotation);
        }
        this.ModelSpaceContent.SetActive(modelInWorld.HasValue);
    }
}
