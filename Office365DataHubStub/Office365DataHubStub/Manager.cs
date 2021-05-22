using System;
using System.Collections.Generic;
using System.Text;


namespace Office365DataHub
{
    public class Manager : Singleton<Manager>
    {
        public delegate void OnGetSomeInformationCompleted(string result);

        public void GetSomeInformation(string url, OnGetSomeInformationCompleted onGetSomeInformationCompleted)
        {
            onGetSomeInformationCompleted(url);
        }

    }
}
