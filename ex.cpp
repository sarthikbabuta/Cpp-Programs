#include<iostream>
using namespace std;
int main()
{
	int num1;
	cin>>num1;
	try
	{
		if(num1==0)
		{
			throw(num1);
		}
		if(num1==-1)
		{
		throw("negative");
		}
	}
	catch(int a)
	{
		cout<<"num is"<<a;
	}
	catch(const char *x)
	{
		cout<<"-ve"<<x;
	}
}
