#include<string.h>
#include<iostream>
using namespace std;
class strings
{
    char *str;
    int len;
    public:
    strings()
    {
        len=0;
        str=NULL;
    }
    strings(char *s)
    {
        len=strlen(s);
        str=new char[len+1];
        strcpy(str,s);
    }
    void show()
    {
        cout<<str;
    }
    strings & operator+=(strings &s);
    int operator==(strings &s);
    int operator>(strings &s);
};
strings & strings::operator+=(strings &s)
{
    strcat(str,s.str);
    return *this;
}
int strings::operator==(strings &s)
{
    if(strcmp(str,s.str)==0)
        return 1;
    else
        return 0;
}
int strings::operator>(strings &s)
{
    if(strcmp(str,s.str)>0)
        return 1;
    else
        return 0;
}
int main()
{
    char s[10];
    strings s1("Hello");
    cin.getline(s,10);   //inbuilt function
    strings s2(s);
    if(s1==s2)
        cout<<"equal"<<endl;

    else if(s1>s2)
        cout<<"First string greater"<<endl;
    else
        cout<<"Second string is greater"<<endl;

    s1+=s2;
    s1.show();
}

