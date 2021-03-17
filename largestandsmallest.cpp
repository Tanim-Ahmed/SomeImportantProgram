//largest number
/*
#include<iostream>
using namespace std;
int mx(int x[],int k)
{
    int t =  x[0];
    for(int i = 0;i<k;i++)
    {
        if(x[i]>t)
        {
            t = x[i];
        }
    }
    return t;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin >> a[i];
    cout<<mx(a,n);

    return 0;
}
*/
//smallest
#include<iostream>
using namespace std;
int mx(int x[],int k)
{
    int t =  x[0];
    for(int i = 0;i<k;i++)
    {
        if(x[i]<t)
        {
            t = x[i];
        }
    }
    return t;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin >> a[i];
    cout<<mx(a,n);

    return 0;
}
