#include<iostream>
using namespace std;
class A
{
	public:
		class B
		{
			int num;
			public:
				void large(int x,int y)
				{
					if(x>y)
					num=x;
					else
					num=y;
				}
				void showdata()
				{
					cout<<"\n large"<<num;
				}
		};
};
int main()
{
	A::B b;
	b.large(100,200);
	b.showdata();
}
