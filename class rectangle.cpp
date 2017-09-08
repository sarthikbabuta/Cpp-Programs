#include<iostream>
using namespace std;
class rectangle
{
	int length;
	int breadth;
	public:
		void read(int l,int b)
		{
			length=l;
			breadth=b;
			
		}
		void display(void)
		{
			int area=(length+breadth);
			cout<<"area="<<area<<"m"<<"\n";
		}
};
int main()
{
	rectangle r1,r2;
	r1.read(20,10);
	r2.read(5,6);
	r1.display();
	r2.display();
	return 0;
}
