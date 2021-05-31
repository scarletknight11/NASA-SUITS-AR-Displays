using UnityEngine;

public class ShowCursor : MonoBehaviour {

    [SerializeField]
    private Texture2D ReleasedState;
    [SerializeField]
    private Texture2D PressedState;

    private Vector2 _hotspot = Vector2.zero;
    [SerializeField]
    private CursorMode _cursorMode = CursorMode.Auto;

    // Start is called before the first frame update
    void Start()
    {
        //set cursor to release and lock on
        Cursor.SetCursor(ReleasedState,_hotspot, _cursorMode);
    }

    // Update is called once per frame
    private void Update()
    {
        //if button down
        if (Input.GetMouseButtonDown(0))
        {
            //cursor is pressed
            Cursor.SetCursor(PressedState, _hotspot, _cursorMode);
        }
        //if button is no longer pressed down
        if (Input.GetMouseButtonUp(0))
        {
            //cursor is released
            Cursor.SetCursor(ReleasedState, _hotspot, _cursorMode);
        }
    }
}
