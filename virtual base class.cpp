#include<iostream>
using namespace std;
class A
{
	protected:
		int i;
		public:
			void put_i()
			{
				cout<<"i is"<<i<<"\n";
			}
};
class B: virtual public A
{
	protected:
		int j;
		public:
			void put_j()
			{
				cout<<"j is"<<j<<"\n";
			}
};
class C: virtual public A
{
	protected:
		int k;
		public:
			void put_k()
			{
				cout<<"k is"<<k<<"\n";
			}
};
class D:public B,public C
{
	protected:
		int sum;
		public:
			void display()
			{
				i=10,j=20,k=30;
				sum=i+j+k;
				put_i();
				put_j();
				put_k();
				cout<<"sum is"<<sum<<"\n";
			}
};
int main()
{
	D d;
	d.display();
	
}
