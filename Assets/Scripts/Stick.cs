using UnityEngine;
using System.Collections.Generic;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
public class Stick : MonoBehaviour {

    public List<string> StuckObjectTags;
    private DragAndShoot m_dragAndShoot;

    private void Start()
    {
        m_dragAndShoot = GetComponent<DragAndShoot>();
    }

    private void OnCollisionEnter(Collision other)
    {
        if(!m_dragAndShoot.IsShoot())
        {
            return;
        }
        //check repeatly every gameobject that is fired to target and if so it will generate those objects every time fired
        for (int i = 0; i < StuckObjectTags.Count; i++)
        {
            //if number of listed gameobjects (balls) hit wall or ground
            if (other.gameObject.CompareTag(StuckObjectTags[i]))
            {
                //enable stick to location whether ground or wall
                GetComponent<Rigidbody>().isKinematic = true;
                break;
            }
        }
    }
}