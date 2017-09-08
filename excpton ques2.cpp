#include<iostream>
using namespace std;
void divide (int a,int b)
{
	try
	{
		if(b==0)
		throw("hello");
		else
		{
			float res=(float)a/b;
			cout<<"\n result="<<res;
		}
	}
	catch(const char *a)
	{
		
		cout<<"\n IN TRY CATCH block of called function";
		cout<<"\n RE THROWING EXCEPTION";
		throw;
	}
}
int main()
{
	int num1,num2;
	cout<<"\n enter two numbers";
	cin>>num1>>num2;
	try
	{
		divide (num1,num2);
	}
	catch(const char *mesg)
	{
		cout<<"\n IN TRY CATCH block of MAIN()";
	}
	cout<<"\n EXITING MAIN";
	return 0;
}
