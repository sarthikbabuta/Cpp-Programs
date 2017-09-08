#include<iostream>
using namespace std;
class A
{
	int real,imag;
	public:
		A(int r,int i)
		{
			real=r;
			imag=i;	
		}
		
		void total(A obj1,A obj2)
		{
		real=obj1.real+obj2.real;
		imag=obj1.imag+obj2.imag;
		}
		void display(void)
		{
			cout<<"real="<<real<<"imaginary="<<imag<<endl;
		}
};
int main()
{
	A a1(50,100);
	A a2(60,40);
	a1.display();
	a2.display();	
}
