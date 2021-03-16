
#include<bits/stdc++.h>
using namespace std;
int  fun(int x)
{
    x = x+10;
}
int main()
{
    int n;
    cin >> n;
    cout<<"Before calling:"<<n<<endl;
    fun(n);
    cout<<"After calling:"<<n<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int fun(int *x)
{
    *x=(*x)+5;

}
int main()
{
 int n;
 cin >> n;
  cout<<"Before calling"<<n<<endl;
 fun(&n);
 cout<<"After calling"<<n<<endl;
 return 0;



}
