#include<iostream>
using namespace std;
class sample
{
	public:
	virtual void example()=0;
};
class eg1:public sample
{
	public:
		void example()
		{
				cout<<"\nUbuntu\n";
		}
};
class eg2:public sample
{
	public:
		void example()
		{
				cout<<"\is great\n";
		}
};
int main()
{
	sample *ptr1,*ptr2;
    eg1 e1;
     eg2 e2;
     ptr1=&e1;
     ptr2=&e2;
	ptr1->example();
	ptr2->example();
	return 0;
}
