#include <iostream>
#include<cmath>
using namespace std;

int main()
{

    int num,orgn,rem,n=0,res=0,poww;
    cin >> num;
    orgn = num;
    while(orgn!=0)
    {
        orgn/=10;
        ++n;
    }
    orgn = num;
    while(orgn!=0)
    {
        rem = orgn %10;
        poww=round(pow(rem,n));
        res+=poww;
        orgn/=10;

    }
    if(res==num)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not armstrong Number"<<endl;
    }



    return 0;
}
