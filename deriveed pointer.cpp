#include<iostream>
using namespace std;
class base
{
	public:
		int b=10;
	  void print()
		{
			
			cout<<"\n print base"<<b;
		}
};
class derived:public base
{
	public:
		int b=20;
		void print()
		{
			cout<<"\nprint derived"<<b;
		}
};
int main()
{
	base b,*bptr;
    derived d,*dptr;
    bptr=&b;
    bptr->print();
    bptr=&d;
    bptr->print();
    dptr=&d;
    dptr->print();
    
}
