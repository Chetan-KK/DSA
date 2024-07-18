#include <iostream>
using namespace std;

int main()
{

    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        // cout<<"Enter "<<i+1<<" row:"<<endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        // cout<<endl;
    }

    cout << "given matrix is" << endl;
    for (int i = 0; i < 3; i++)
    {
        // int ans = 0;

        if (i % 2 == 0)
        {
            for (int j = 2; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            // for (int j = 0; j < 3; j++)
            // {
            //     // ans=ans+arr[i][j];
            //     cout << arr[j][i] << " ";
            // }
        }

        // cout<<": "<<ans<<endl;
        cout << endl;
    }

    return 0;
}