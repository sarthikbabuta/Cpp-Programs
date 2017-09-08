#include<iostream>
using namespace std;
class dist
{
	float feet,inches,metre,cm;
	public:
		void get()
		{
			cout<<"enter distance feet inches";
			cin>>feet>>inches;
			cin>>metre>>cm;
			metre=39.37*metre;
			cm=0.3937*cm;
		}
		void add()
		{
			inches=inches+metre+cm;
			while(inches>=12)
			{
				inches=inches-12;
				feet=feet+1;
			}
			
		}
		void put()
		{
			cout<<"feet="<<feet<<"inches="<<inches;
		}
};
int main()
{
	dist d1;
	d1.get();
	d1.add();
	d1.put();
	return 0;
	
}
