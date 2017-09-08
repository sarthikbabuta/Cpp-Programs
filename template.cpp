#include<iostream>
using namespace std;
template<class T>
void swaped(T &x,T &y)
{
	T temp;
	temp=x;
	x=y;
	y=temp;
	
}
int main()
{
	int a,b;
	float c,d;
	cin>>a>>b>>c>>d;
	swaped(a,b);
	swaped(c,d);
	cout<<"a="<<a<<" "<<"b="<<b<<"\n"<<"c="<<c<<" "<<"d="<<d;
	return 0;
}
