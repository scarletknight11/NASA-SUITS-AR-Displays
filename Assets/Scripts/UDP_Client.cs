using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEngine;

public class UDP_Client : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        UDPTest();
    }

    // Update is called once per frame
    void UDPTest()
    {
        UdpClient client = new UdpClient(5600);
        try
        {
            client.Connect("192.168.1.213", 5500);
            byte[] sendBytes = Encoding.ASCII.GetBytes("Hello, from client");
            client.Send(sendBytes, sendBytes.Length);

            IPEndPoint remoteEndPoint = new IPEndPoint(IPAddress.Any, 0);

            byte[] receiveBytes = client.Receive(ref remoteEndPoint);
            string receivedString = Encoding.ASCII.GetString(receiveBytes);

            print("Message received from the server \n " + receivedString);
        } catch(Exception e)
        {
            print("Exception thrown " + e.Message);
        }
    }
}
