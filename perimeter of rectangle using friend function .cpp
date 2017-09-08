#include<iostream>
#include<string.h>
using namespace std;
class st
{
    int l,b;
	public:
	void getdata()
	{
		cin>>l>>b;
	}
	friend int perimeter(st);
};
int perimeter(st s1)
{
	return 2*(s1.l+s1.b);

}
int main()
{
	st a;
	a.getdata();
	cout<<perimeter(a);
}
