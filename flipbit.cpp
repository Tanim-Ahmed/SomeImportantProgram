//count 1 in 4
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while(n)
    {
        count+=n&1;
        n>>=1;
    }
    cout<<count<<endl;
    return 0;

}
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cin >> a >> b;
    n = a^b;
    int count = 0;
    while(n)
    {
        count+=n&1;
        n>>=1;
    }
    cout<<count<<endl;
    return 0;
}
