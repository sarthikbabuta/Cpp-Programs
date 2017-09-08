#include<iostream>
using namespace std;
class dist
{
    int km,m,cm;
public:
    /*dist ()
    {
        km=m=cm=1;
    }*/
    void getval()
    {
        cout<<"enter the km ";
        cin>> km;
        cout<< "\nenter the m";
        cin>>m;
        cout<<"\nenter the cm";
        cin>>cm;
    }
    void add(dist D1 , dist D2)
    {
        cm=D1.cm+D2.cm;
         m=D1.m+D2.m;
         km=D1.km+D2.km;
        if(cm>100)
        {
            m+=cm/100;
            cm=cm%100;
        }
        if(m>1000)
        {
            km+=m/1000;
            m=m%1000;
        }
        cout<<" The total distance is "<<km <<"km"<<m<<"m"<<cm<<"cm"<<endl;

    }
};
int main()
{
    dist d1,d2,d3;
    d1.getval();
    d2.getval();
    d3.add(d1,d2);
    return 0;
}
