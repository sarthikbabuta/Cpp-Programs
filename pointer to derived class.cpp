#include<iostream>
using namespace std;
class B
{
		public:
			int b;
		void show()
		{
			cout<<"b="<<b<<"\n";
		}
};
class D:public B
{
		public:
			int d;
		void show()
		{
			cout<<"B="<<b<<"D="<<d<<"\n";
		}
};
int  main()
{
	B *bptr;
	B base;
	bptr=&base;
	bptr->b=100;
	cout<<"pointer to base"<<endl;
	bptr->show();
	D derived;
	bptr=&derived;
	bptr->b=200;
	/* bptr-> d=300 will be invalid*/
	D *dptr;
	dptr=&derived;
	dptr->d=300;
	cout<<"pointer of derived class"<<endl;
	dptr->show();
	cout<<"casting base pointer to derived class";
	((D*)bptr)->d=400;
	((D*)bptr)->show();
	return 0;
}
