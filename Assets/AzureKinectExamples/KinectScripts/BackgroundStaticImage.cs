using UnityEngine;
using System.Collections;
using com.rfilkov.kinect;


namespace com.rfilkov.components
{
    /// <summary>
    /// Background static image is component that displays the static image on RawImage texture, usually the scene background.
    /// </summary>
    public class BackgroundStaticImage : MonoBehaviour
    {
        [Tooltip("Image dimensions in pixels.")]
        public Vector2Int imageSize = Vector2Int.zero;

        [Tooltip("Image scale in X and Y directions.")]
        public Vector2 imageScale = Vector2.one;

        [Tooltip("RawImage used to display the color camera feed.")]
        public UnityEngine.UI.RawImage backgroundImage;

        [Tooltip("Camera used to display the background image. Set it, if you'd like to allow background image to resize, to match the color image's aspect ratio.")]
        public Camera backgroundCamera;


        // last camera rect width & height
        private float lastCamRectW = 0;
        private float lastCamRectH = 0;

        private Vector2 initialAnchorPos = Vector2.zero;


        void Start()
        {
            if (backgroundImage == null)
            {
                backgroundImage = GetComponent<UnityEngine.UI.RawImage>();
            }

            if(imageSize == Vector2.zero && backgroundImage != null && backgroundImage.texture != null)
            {
                imageSize = new Vector2Int(backgroundImage.texture.width, backgroundImage.texture.height);
            }
        }


        void Update()
        {
            float cameraWidth = backgroundCamera ? backgroundCamera.pixelRect.width : 0f;
            float cameraHeight = backgroundCamera ? backgroundCamera.pixelRect.height : 0f;

            if (backgroundImage && (lastCamRectW != cameraWidth || lastCamRectH != cameraHeight))
            {
                lastCamRectW = cameraWidth;
                lastCamRectH = cameraHeight;

                backgroundImage.rectTransform.localScale = new Vector3(imageScale.x, imageScale.y, 1f);
                backgroundImage.color = Color.white;

                //Debug.Log("aPos: " + backgroundImage.rectTransform.anchoredPosition + ", aMin: " + backgroundImage.rectTransform.anchorMin +
                //    ", aMax:" + backgroundImage.rectTransform.anchorMax + ", pivot: " + backgroundImage.rectTransform.pivot +
                //    ", size: " + backgroundImage.rectTransform.sizeDelta);

                if (backgroundCamera != null)
                {
                    // adjust image's size and position to match the stream aspect ratio
                    int imageWidth = imageSize.x;
                    int imageHeight = imageSize.y;
                    if (imageWidth == 0 || imageHeight == 0)
                        return;

                    RectTransform rectImage = backgroundImage.rectTransform;
                    float rectWidth = (rectImage.anchorMin.x != rectImage.anchorMax.x) ? cameraWidth * (rectImage.anchorMax.x - rectImage.anchorMin.x) : rectImage.sizeDelta.x;
                    float rectHeight = (rectImage.anchorMin.y != rectImage.anchorMax.y) ? cameraHeight * (rectImage.anchorMax.y - rectImage.anchorMin.y) : rectImage.sizeDelta.y;

                    if (imageWidth > imageHeight)
                        rectWidth = rectHeight * imageWidth / imageHeight;
                    else
                        rectHeight = rectWidth * imageHeight / imageWidth;

                    Vector2 pivotOffset = (rectImage.pivot - new Vector2(0.5f, 0.5f)) * 2f;
                    //Vector2 imageScale = this.imageScale;
                    Vector2 anchorPos = rectImage.anchoredPosition + pivotOffset * imageScale * new Vector2(rectWidth, rectHeight);

                    if (rectImage.anchorMin.x != rectImage.anchorMax.x)
                    {
                        rectWidth = -(cameraWidth - rectWidth);
                    }

                    if (rectImage.anchorMin.y != rectImage.anchorMax.y)
                    {
                        rectHeight = -(cameraHeight - rectHeight);
                    }

                    rectImage.sizeDelta = new Vector2(rectWidth, rectHeight);
                    rectImage.anchoredPosition = initialAnchorPos = anchorPos;
                    //Debug.Log("imgSize: " + imageSize + ", camW: " + cameraWidth + ", camH: " + cameraHeight + ", sizeDelta: " + rectImage.sizeDelta + ", anchoredPosition: " + rectImage.anchoredPosition);
                }
            }

            //RectTransform rectTransform = backgroundImage.rectTransform;
            //Debug.Log("pivot: " + rectTransform.pivot + ", anchorPos: " + rectTransform.anchoredPosition + ", \nanchorMin: " + rectTransform.anchorMin + ", anchorMax: " + rectTransform.anchorMax);
        }

    }
}

