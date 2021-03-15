//series of 1/1+1/2+1/3+.........
#include<iostream>
using namespace std;
int main()
{
    double sum = 0;
    int n;
    cin >>n;
    for(double i = 1;i<=n;i++)
    {
        sum = sum+1/i;
    }
    cout<<sum<<endl;
    return 0;
}
