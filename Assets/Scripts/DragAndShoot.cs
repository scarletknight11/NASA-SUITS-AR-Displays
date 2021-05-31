using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Collider))]
public class DragAndShoot : MonoBehaviour {

    private Vector3 mousePressDownPos;
    private Vector3 mouseReleasePos;

    private Rigidbody rb;

    private bool isShoot;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    //method for when mouse is pressed
    private void OnMouseDown()
    {
        //when mouse is pressed down
        mousePressDownPos = Input.mousePosition;
    }

    //method for when mouse is released
    private void OnMouseUp()
    {
        //when mouse is released 
        mouseReleasePos = Input.mousePosition;
        //compute the firing of projectile
        Shoot(mouseReleasePos - mousePressDownPos);
    }

    private float forceMultiplier = 3;

    void Shoot(Vector3 Force)
    {
        //check if firing is on/off
        if (isShoot)
            return;

        //if firing is on and active compute force of projectile based on x & y coordinates and multiply the force inputed by player
        rb.AddForce(new Vector3(Force.x, Force.y, Force.y) * forceMultiplier);
        //firing is projected true and is turned on
        isShoot = true;
        //Spawn new gameObject
        Spawner.Instance.NewSpawnRequest();
    }

    public bool IsShoot()
    {
        return isShoot;
    }
}