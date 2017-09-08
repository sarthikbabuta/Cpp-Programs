#include<iostream>
using namespace std;
class cube;
class cuboid
{
	int l,b,h,v;
	public:
		void setdata(cube &);
		void get()
		{
			cin>>l>>b>>h;
		}
		int claculate_vol()
		{
			return l*b*h;
		}
};
class cube
{
	int side;
	friend class cuboid;
	public:
		void get()
		{
			cin>>side;
		}
};
void cuboid::setdata(cube &c)
		{
			l=b=h=c.side;
		}
int main()
{
	cuboid c1;
	c1.get();
	cout<<"\nvolume="<<c1.claculate_vol();
	cube C1;
	C1.get();
	c1.setdata(C1);
	c1.claculate_vol();
	return 0;
}
