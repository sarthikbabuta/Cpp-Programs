#include<iostream>
using namespace std;
class rect
{
    int l,b,p;
public:
    void getval()
    {
        cout<<"Enter the length ";
        cin>> l;
        cout<< "\n enter the breadth";
        cin>> b;
    }
     void peri()
     {
         
    p=(l+b)/2;
    cout<<"the perimeter is "<<p<<endl;
     }
};

int main()
{
    rect r1;
    r1.getval();
    r1.peri();
    return 0;
}

