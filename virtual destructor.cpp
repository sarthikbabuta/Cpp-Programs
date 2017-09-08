//virtual destructor
#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"\nbase constructor";
		}
	virtual	~base()
		{
			cout<<"\nbase destructor";
		}
};
class derived:public base
{
	public:
		derived()
		{
			cout<<"\nderived constructor";
		}
	virtual	~derived()
		{
			cout<<"\nderived destructor";
		}
};
int main()
{
	base *bptr=new derived(); //new derived(object bnaya hai)
	//base *bptr;
	//derived d;
	//bptr=&d;
	delete bptr;
	return 0;
}
