#include<iostream>
#include<string.h>
using namespace std;
class Exception
{
	int e;
	char *s;
	public:
		Exception(int e1,char *s1)
		{
			e=e1;
			int l=strlen(s1);
			s=new char[l+1];
			strcpy(s,s1);
		}
	void show()
	{
		cout<<e<<s;
	}

};
	void divide(int a,int b)
	{
		try
		{	
	if(b==0)
	throw Exception(0,"no");
	else
    cout<<a/b;
	}
    catch(const char *s)
     { 
  	cout<<"no";
    }
}


int main()
{
	int a,b;
	cin>>a>>b;
	try
	{
		divide(a,b);
	}
	catch(Exception e)
	{
		cout<<"helllo";
	}
	
}
