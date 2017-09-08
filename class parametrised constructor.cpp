#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
		A(int a,int b)
		{
			x=a;
			y=b;
		}
		void display()
		{
			cout<<"x="<<x<<"y="<<y<<endl;
		}
};
int main()
{
	A a1(10,20);
	A a2(40,50);
	a1.display();
	a2.display();
	return 0;
}
