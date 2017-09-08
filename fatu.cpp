#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
		complex()
		{
			r=0;
			i=0;
		}
		A(int a)
		{
			r=i=a;
		}
		A(int a,int b)
		{
			r=a;
			i=b;
		}
		void display(void)
		{
			cout<<"sum="<<x<<"+"<<i<<endl;
		}
		friend complex add(complex,complex);
};
complex add(complex c1,complex c2)
{
	complex c1;
	c1.r=c1.r+c2.r;
	c1.i=c1.i+c2.i;
	return c3;
}

int main()
{
	complex c1;
	complex c2(20);
	complex c4(10,20);
	complex c5(5)
	a3=A(50,50);
	a1.display();
	a2.display();
	a3.display();
	return 0;
}
