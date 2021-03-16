#include<iostream>
using namespace std;
void changeCaseAndReverse(char *s)
{
    int begin = 0, end =0, count = 0, c = 0;
    char ch,r[1000];
    while(s[c]!='\0')
    {
        ch=s[c];
        if(ch>='A'&&ch<='Z')
        s[c]=s[c]+32;
        else if(ch>='a'&&ch<='z')
            s[c]=s[c]-32;
        c++;



    }
    while(s[count]!='\0')
    {
        count++;
        end=count-1;
        for(begin = 0;begin<count;begin++)
            r[begin]=s[end];
        end--;
    }
    r[begin]='\0';
    cout<<r<<endl;
}
int main()
{
    char ch[1000];
    gets(ch);
    changeCaseAndReverse(ch);
    return 0;
}
