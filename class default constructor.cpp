#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		A()
		{
			x=2;
			y=5;
		}
		void display()
		{
			cout<<"x="<<x<<"y="<<y<<endl;
		}
};
int main()
{
	A a1,a2;
	a1.display();
	a2.display();
	return 0;
}
