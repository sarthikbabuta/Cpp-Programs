#include<iostream>
using namespace std;
class rectangle;
class square
{
	int side;
	public:
		square(int s)
		{
			side=s;	
		}
		int getside()
		{
			return side;
		}
};
class rectangle
{
	int len,breadth;
	public:
		rectangle(int l,int b)
		{
			len=l;
			breadth=b;
		}
		rectangle(square s)
		{
			len=breadth=s.getside();
		}
		void showdata()
		{
			cout<<"length="<<len<<"\tbreadth="<<breadth<<"\n";
		}
		
};
int main()
{
	rectangle r(10,20);
	square s(50);
	r.showdata();
	r=s;
	r.showdata();
	return 0;
}
