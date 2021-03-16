#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    int cnt = 0;
    while(n!=0)
    {
       int rem = n%10;
        if(rem==m)
        {
            cnt++;
        }
        n/=10;
    }
    cout<<cnt<<endl;
    return 0;

}
