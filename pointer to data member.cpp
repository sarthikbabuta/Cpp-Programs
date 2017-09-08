#include<iostream>
using namespace std;
class data
{
	public:
		int a;
		void print()
		{
			cout<<"\n a is"<<a;
		}
};
int main()
{
	data d;
	data *dp;
	dp=&d;
	int data::*ptr=&data::a;
	d.*ptr=10;
	d.print();
	dp->*ptr=20;
	dp->print();
	return 0;
}

