using UnityEngine;

[RequireComponent(typeof(MeshRenderer))]
[RequireComponent(typeof(Collider))]
[RequireComponent(typeof(DragAndShoot))]
public class MaterialChanger : MonoBehaviour {

    public Material CorrectMat;
    public Material WrongMat;
    private MeshRenderer m_meshRenderer;
    private DragAndShoot m_dragAndShoot;
    public string TargetGameObjectTag = "Wall";
    public string UnWantedGameObjectTag = "Ground";

    private void Start()
    {
        m_meshRenderer = GetComponent<MeshRenderer>();
        m_dragAndShoot = GetComponent<DragAndShoot>();
    }

    private void OnCollisionEnter(Collision other)
    {
        //if not shot then return
        if (!m_dragAndShoot.IsShoot())
        {
            return;
        }
        //otherwise if fired and projectile hits target
        if (other.gameObject.CompareTag(TargetGameObjectTag))
        {
            //color it green
            m_meshRenderer.material = CorrectMat;
        }
        //if projectile fired and hits ground
        else if (other.gameObject.CompareTag(UnWantedGameObjectTag))
        {
            //color it red
            m_meshRenderer.material = WrongMat;
        }
    }
}