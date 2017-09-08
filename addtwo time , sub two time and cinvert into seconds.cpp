#include<iostream>
using namespace std;
class time
{
    int hr,m,sec;
public:
    void getval()
    {
        cout<<"enter the hrs";
        cin>>hr;
        cout<<"\nenter the mins";
        cin>>m;
        cout<<"\nenter the seconds";
        cin>>sec;
    }
    void add (time t1 , time t2)
{
    hr=t1.hr+t2.hr;
    m=t1.m+t2.m;
    sec=t1.sec+t2.sec;
    if(sec>=60)
    {
        m+=sec/60;
        sec=sec%60;
    }
    if(m>=60)
    {
        hr+=m/60;
        m=m%60;
    }
    
	cout<<"the total time is"<<hr<<"hrs"<<m<<"min"<<sec<<"sec"<<endl;
    sec=sec+m*60+hr*3600;
    cout<<"the total time is seconds are "<<sec<< " seconds" <<endl;
}
};
int main()
{
    time a,b,c;
    a.getval();
    b.getval();
    c.add(a,b);
    return 0;
}

