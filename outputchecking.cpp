/*
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=2;i++)
    {
        for(int j=1;j<=2;j++)
        {
           if(i==j)
            continue;
           cout<<i<<" "<<j<<endl;
        }
    }

        return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1,k=0,l=2,m;
    int a = 3;
    int b = ++a + ++a;
    cout<<b<<endl;

   return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(int i = 0;i<5;i++)
    {
        if(i==3)
            break;
        cout<<i<<" ";
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    char str[120]="Bangladesh";
    char str2;
    str1[4]='\0';
    str2=strlen(str);
    cout<<str2<<endl;
    return 0;
}


*/
/*
#include<iostream>
using namespace std;
int sum(int i)
{
    static int total = 0;
    total+=i;
    return total;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1;i<10;i++)
    {
        cout<<sum(i)<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int cnt=0;
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=10;j>0;j--)

        {
           cnt++;
            if(j==i+1)
                break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

*/
/*1
1 2
1 2 3
1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;

}

