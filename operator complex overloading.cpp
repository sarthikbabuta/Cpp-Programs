#include<iostream>
using namespace std;
class complex
 {
 	float real;
 	float imag;
 	public:
 		complex()
 		{
 			//real=0;
 			//imag=0;
		 }
		 complex(float x,float y)
		 {
		 	real=x;
		 	imag=y;
		 }
		 //complex operator + (complex);
		 friend complex operator+(complex,complex);
		 void display()
		 {
		 	cout<<real<<"+i"<<imag<<"\n";
		 }
};
//complex complex :: operator + (complex a)
complex operator+(complex a,complex b)
{
	complex temp;                    //return ((real+a.real),(imag+a.imag));
	temp.real=a.real+b.real;
	temp.imag=a.imag+b.imag;
	return temp;                         
}
int main()
{
	complex c1(11.5,20.1),c2(30.0,40.5);
	complex c3;
	c3=c1+c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
