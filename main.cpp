#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int num,res=0,n=0,poww,rem;
 cout<<"Enter your number"<<endl;
 cin >> num;
 int orgn;
 orgn = num;
 //digit count
 while(orgn!=0)
 {
     orgn/=10;
     n++;
 }
  orgn = num;
  while(orgn!=0)
  {
      rem = orgn%10;
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
      cout<<"Not Armstrong Number"<<endl;
  }


 return 0;

}
