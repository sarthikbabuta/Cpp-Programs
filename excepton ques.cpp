#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a value (-1,0,1)";
	cin>>num;
	try
	{
		if(num==0)
		throw ("zero");// string constant
		else if(num==-1)
		throw(num);
		else if(num==1)
		cout<<"num="<<num;
		else
		throw;
	}
	catch(const char *s)
	{
		cout<<"\n number is"<<s;
	}
	catch(int x)
	{
		cout<<"\n number is negetive";
	}
	catch(...)//for everything else
	{
		cout<<"wrong value";
	}
	cout<<"\n exiting main";
	return 0;
}
