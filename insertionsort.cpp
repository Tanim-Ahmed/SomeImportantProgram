/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin >> arr[i];
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";

        for(int k=1;k<n;k++)
        {
//            int temp = arr[k];
//            cout<<temp<<endl;
//            int j = k-1;

        int temp = arr[k];
        int j = k-1;
        while(j>=0 &&temp<=arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1] = temp;


        }
        for(int  i = 0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }


    return 0;

}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin >> arr[i];

    for(int k = 1;k<n;k++)
    {
        int temp = arr[k];
        int j = k -1;
        while(j>=0&&temp<=arr[j])
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = temp;

    }

        for(int i = 0;i<n;i++)
        cout<<arr[i]<<" ";
        return 0;







}
