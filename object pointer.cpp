#include<iostream>
using namespace std;
class example
{
	int a;
	public:
	void getdata()
	{
		cin>>a;
	}
	void putdata()
	{
		cout<<a;
	}
};
int main()
{
	example s;
	example *ptr;
	ptr=&s;
	(*ptr).getdata();
	//ptr->getdata();
	//(*ptr).putdata();
	ptr->putdata();
	return 0;
}
