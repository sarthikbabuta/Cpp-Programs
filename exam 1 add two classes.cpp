#include<iostream>
using namespace std;
class a;
class b
{
	int y;
	public:
	void getdata(a &);
	void showdata(a &);
};
class a
{
	int x;
	friend void b::getdata(a &);
	friend void b::showdata(a &);
};
void b::getdata(a &a1)
{
	cout<<"\nenter class a's x:";
	cin>>a1.x;
	cout<<"\n enter class b's y";
	cin>>y;
}
void b::showdata(a &a1)
{
	cout<<"\n a's x:"<<a1.x;
	cout<<"\n b's y:"<<y;
	cout<<"\n sum:"<<a1.x+y;
}
int main()
{
	a a1;
	b b1;
	b1.getdata(a1);
	b1.showdata(a1);
}
