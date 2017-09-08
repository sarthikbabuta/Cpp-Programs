#include<iostream>
using namespace std;
class point 
{
	int x;
	int y;
	public:
		point();
		point(int a,int b);
		void showdata();
		friend point operator+(point,point);
		friend point operator-(point,point);
		friend void operator++(point &p1);
		friend void operator--(point &p1);
};
point::point()
{
	
}
point::point(int a,int b)
{
	x=a;
	y=b;
}
void point::showdata()
{
	cout<<x<<","<<y;
}

point operator+(point p1,point p2)
{
	point temp;
	temp.x=p1.x+p2.x;
	temp.y=p1.y+p2.y;
	return temp;
	
}
point operator-(point p1,point p2)
{
	point temp;
	temp.x=p2.x-p1.x;
	temp.y=p2.y-p1.y;
	return temp;
	
}
void operator++(point & p1)
{
	++ p1.x;
	++p1.y;
}
void operator--(point & p1)
{
	--p1.x;
	--p1.y;
}
int main()
{
	point A(10,10),B(20,20),C,D,E(20,21),F(23,24);
	C=A+B;
	D=A-B;
	++E;
	--F;
	cout<<"the resultant array is:\n";
	C.showdata();
	cout<<"\n";
	D.showdata();
	cout<<"\n";
	E.showdata();
	cout<<"\n";
	F.showdata();
	return 0;
}
