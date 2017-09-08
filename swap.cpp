#include<iostream>
using namespace std;

class b;
class a
{
	friend class b;
	int x;
	public:
		void get()
		{
			cin>>x;
		}
		void display()
		{
			cout<<x;
		}
		
};
class b
{
	
	int y;
	public:
		void get()
		{
			cin>>y;
		}
		void display()
		{
			cout<<y;
		}
		void swap(a &a1)
		{
			int temp;
			temp=a1.x;
			a1.x=y;
			y=temp;
		}
};
int main()
{
	a a1;
	b b1;
	a1.get();
	b1.get();
	b1.swap(a1);
	a1.display();
	b1.display();
}
