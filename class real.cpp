#include<iostream>
using namespace std;
class complex
{
	int real;
	int imag;
	public:
		void getdata(int r,int i)
		{
			real=r;
			imag=i;
		}
		void putdata(void)
		{
			cout<<"real="<<real<<" imag="<<imag<<"\n";
		}
		void total(complex c1,complex c2)
		{
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
		}
		void subtract(complex c1,complex c2)
		{
			real=c2.real-c1.real;
			imag=c2.imag-c1.imag;
		}
	    void multiply(complex c1,complex c2)
		{
			real=c1.real*c2.real;
			imag=c1.imag*c2.imag;
		}
		void division(complex c1,complex c2)
		{
			real=c1.real/c2.real;
			imag=c1.imag/c2.imag;
		}	
};
int main()
{
	complex c1,c2,c3,c4,c5,c6;
	c1.getdata(4,5);
	c2.getdata(5,7);
	c3.total(c1,c2);
	c4.subtract(c1,c2);
	c5.multiply(c1,c2);
	c6.division(c1,c2);
	c1.putdata();
	c2.putdata();
	c3.putdata();
	c4.putdata();
	c5.putdata();
	c6.putdata();	
}

