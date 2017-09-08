#include<iostream>
using namespace std;
class square;
class rectangle
{
	int len,breadth;
	public:
		rectangle(int l=0,int b=0)
		{
			len=l;
			breadth=b;
		}
		void showdata()
		{
			cout<<"length="<<len<<"\tbreadth="<<breadth<<"\n";
		}
		
};
class square
{
	int side;
	public:
		square(int s=0)
		{
			side=s;	
		}
		operator rectangle()
		{
			rectangle r(side,side);
			return r;
		}
};
int main()
{
	rectangle r(10,20);
	r.showdata();
	square s(50);
	r=s;//r=rectangle(s);
	r.showdata();
}
