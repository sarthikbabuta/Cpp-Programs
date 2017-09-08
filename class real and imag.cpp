#include<iostream>
using namespace std;
class complex
{
	int real;
	int imag;
	public:
		void getdata();
		void showdata();
		void add(complex,complex);
};
void complex::getdata()
{
	cin>>real;
	cin>>imag;
}
void complex::showdata()
{
	cout<<real<<"\t"<<imag;
}
void complex::add(complex c1,complex c2)
{
	real=c1.real+c2.real;
	imag=c1.imag+c2.imag;
}
int main()
{
	complex c,a,b;
	c.getdata();
	a.getdata();
	b.add(c,a);
	b.showdata();
}
