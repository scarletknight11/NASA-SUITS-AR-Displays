using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Azure.RemoteRendering;
using Microsoft.Azure.RemoteRendering.Unity;
using System;

/// <summary>
/// This script can be used to visualize the position of the focus point retrieved from remote rendering.
/// It sets the game object's position to the focus point position, accordingly it makes sense to attach some visualization geometry (e.g. a small sphere) to the owner.
/// </summary>
public class VisualizeRemoteFocusPoint : MonoBehaviour
{
    FocusPointResult _validResult = FocusPointResult.Invalid;
    Vector3 _focusPos;
    Vector3 _focusNormal;
    Vector3 _focusVelocity;

    void Start()
    {
        Renderer renderer = gameObject.GetComponent<Renderer>();
        renderer.material.SetColor("_BaseColor", Color.magenta);
    }

    // Update is called once per frame
    void Update()
    {
        if (!RemoteManagerUnity.IsConnected)
        {
            return;
        }
        Float3 position = new Float3(0, 0, 0);
        Float3 normal = new Float3(0, 0, 0);
        Float3 velocity = new Float3(0, 0, 0);

        _validResult = RemoteManagerUnity.CurrentSession.GraphicsBinding.GetRemoteFocusPoint(out position, out normal, out velocity);

        if (_validResult != FocusPointResult.Invalid)
        {
            // this conversion just marshals from Float3 to Vector3, no transform takes place
            _focusPos = CommonExtensions.toUnity(position);
            _focusNormal = CommonExtensions.toUnity(normal);
            _focusVelocity = CommonExtensions.toUnity(velocity);

            this.gameObject.transform.position = _focusPos;
        }

        Renderer renderer = gameObject.GetComponent<Renderer>();

        switch(_validResult)
        {
            case FocusPointResult.Invalid:
                renderer.material.SetColor("_BaseColor", Color.red);
                break;
            case FocusPointResult.Fallback:
                renderer.material.SetColor("_BaseColor", Color.yellow);
                break;
            case FocusPointResult.Valid:
                renderer.material.SetColor("_BaseColor", Color.cyan);
                break;
            default:
                renderer.material.SetColor("_BaseColor", Color.magenta); // same as initial color
                break;
        }
    }
}
