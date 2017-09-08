#include<iostream>
#include<string.h>
using namespace std;

class strings
{
    char s1[100],s2[100];
public:
    void getval()
    {
        cin >>s1;
        cin>>s2;

    }
    void display()
    {
        strcat(s1,s2);
        cout <<"The final string is "<<s1;
    }
};
int main()
{
    strings a,b;
    a.getval();
    //b.getval();
    a.display();
}
