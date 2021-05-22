using System.Net.Http;
using System.Threading.Tasks;
using System.Windows;

namespace Office365DataHub
{
    public class Manager : Singleton<Manager>
    {
        public delegate void OnGetSomeInformationCompleted(string result);

        protected async Task GetSomeInformationAsync(string url, OnGetSomeInformationCompleted onGetSomeInformationCompleted)
        {
            string result = "";
            using (var client = new HttpClient())
            {
                HttpResponseMessage response = await client.GetAsync(url);

                if (response.IsSuccessStatusCode)
                {
                    result = await response.Content.ReadAsStringAsync();
                }
            }
            onGetSomeInformationCompleted(result);
        }

        public void GetSomeInformation(string url, OnGetSomeInformationCompleted onGetSomeInformationCompleted)
        {

        }
    }
}
