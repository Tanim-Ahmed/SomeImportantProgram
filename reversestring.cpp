
//First method.......

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[50],temp;
    int j;
    gets(str);
    j = strlen(str)-1;
    for(int i = 0;i<j;i++,j--)
    {
     temp = str[i];
     str[i]=str[j];
     str[j]=temp;
    }


    cout<<str<<endl;
    return 0;
}





#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[200];
    gets(str);
   int len;
   len = strlen(str)-1;
   for(int i=len;i>=0;i--)
   {
       cout<<str[i];
   }
    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string rev = string(str.rbegin(),str.rend());
    cout<<rev<<endl;
    return 0;
}




