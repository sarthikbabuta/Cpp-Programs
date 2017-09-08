#include<iostream>
using namespace std;
class B;
class A
{
	friend class B;
	int x;
	public:
		void getdata()
		{
			cout<<"enter x";
			cin>>x;
			
		}
		void showdata()
		{
			cout<<" A x is:"<<x;
		}
};
class B
{
	int y;
	public:
		void getdata()
		{
			cout<<"enter y";
			cin>>y;
			
		}
		void showdata()
		{
			cout<<"B y is:"<<y;
		}
		void swap(A &a)
		{
			int temp=a.x;
			a.x=y;
			y=temp;
		}
};
int main()
{
	A a1;
	B b1;
	a1.getdata();
	b1.getdata();
	a1.showdata();
	b1.showdata();
	b1.swap(a1);
	cout<<"\n After swapping";
	a1.showdata();
	b1.showdata();
	return 0;
}
