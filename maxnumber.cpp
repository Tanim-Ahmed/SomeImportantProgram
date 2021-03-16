//largest element

#include<iostream>
using namespace std;
int max(int x[],int k)
{
    int t=x[0];
    for(int i = 1;i<k;i++)
    {
        if(x[i]>t)
            t=x[i];
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
    int m = max(a,n);
    cout<<m<<endl;

    return 0;
}
//second largest max
#include<iostream>
#include<climits>
using namespace std;

void secondl(int a[],int k)
{
    int first,second;
    first = second = INT_MIN;
    if(k<2)
    {
        cout<<"Invallid"<<endl;
    }
    for(int i = 0;i<k;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first = a[i];
        }
        else if(a[i]>second &&a[i]!=first)
        {
            second = a[i];
        }
    }

    if(second==INT_MIN)
    {
        cout<<"Not found second largest"<<endl;
    }
    else
    {
        cout<<second<<endl;
    }

}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin >> a[i];

    secondl(a,n);
    return 0;
}













