#include<iostream>
#include<string.h>
using namespace std;
class st
{
    int x,y,arr[10],imag,size,n;
	public:
	st();
	st(int a,int b);
	void showdata();
	friend void operator ++(st &s1);
};
st::st()
{
	
}
st::st(int a,int b)
{
	x=a;
	y=b;
}
void st:: showdata()
{
	cout<<x<<" "<<y<<"\n";
}
void operator ++(st &s1)
{
	++s1.x;
	++s1.y;
}
int main()
{
	st m(10,20),n(20,21);
	++m;
	++n;
	m.showdata();
	n.showdata();
}
