#include<iostream>
using namespace std;
class base
{
	public:
	void print()
		{
			
			cout<<"\n print base";
		}
	 virtual void show()
		{
			cout<<"\n show base";
		}
};
class derived:public base
{
	public:
		void print()
		{
			cout<<"\nprint derived";
		}
		void show()
		{
			cout<<"\n show derived";
		}
};
int main()
{
	base b,*bptr;
    derived d,*dptr;
    bptr=&b;
    bptr->show();
    bptr->print();
    bptr=&d;
    bptr->show();
    bptr->print();
    dptr=&d;
    dptr->show();
    dptr->print();
    
}
