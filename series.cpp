/* 1*3+2*5+..............+n*(2*n+1) */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp,sum = 0;
    for(int i = 1;i<=n;i++)
    {
        temp = 2*i+1;
        sum=sum+i*(temp);
    }
    cout<<sum<<endl;


    return 0;
}
