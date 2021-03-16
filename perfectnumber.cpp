#include<iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cin >> n;
    int sum = 0;
    while(i<n)
    {
        if(n%i==0)
            sum+=i;
        i++;


    }
    if(sum==n)
    {
        cout<<"Perfect Number:"<<endl;
    }
    else
    {
        cout<<"not a perfect Number"<<endl;
    }
    return 0;
}
