#include<iostream>
using namespace std;
class example
{
	int a;
	public:
	void print()
	{
		cout<<this->a;
	}
	example (int x)
	{
		a=x;
	}
};
int main()
{
	int z;
	cin>>z;
	example e1(z);
	e1.print();
	return 0;
}
