#include<iostream>
using namespace std;
template<class T1,class T2>
void swaped(T1 &x,T2 &y)
{
	T1 temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a,b;
	float c,d;
	cin>>a>>b>>c>>d;
	swaped(a,c);
	swaped(b,d);
	cout<<"a="<<a<<" "<<"b="<<b<<"\n"<<"c="<<c<<" "<<"d="<<d;
	return 0;
}
