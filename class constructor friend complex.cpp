#include<iostream>
using namespace std;
class B;
class A
{
	int x,y;
	public:
		A(int a,int b)
		{
			x=a;
			y=b;	
		}
		void display(void)
		{
			cout<<"real="<<x<<"imaginary="<<y<<endl;
		}
		friend void 
};
class B
{
	int x,y;
	public:
		A(int a,int b)
		{
			x=a;
			y=b;
			
			
		}
		void display(void)
		{
			cout<<"real="<<x<<"imaginary="<<y<<endl;
		}
};
int main()
{
	A a1(50,100);
	A a2(60,40);
	a1.display();
	a2.display();
}
