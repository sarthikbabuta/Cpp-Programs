#include<iostream>
using namespace std;
class pointer
{
	int a,b;
	public:
		friend int sum(int,int);
		friend int sub(int,int);
		friend int mul(int,int);
		friend int div(int,int);
};
   int (*funptr[4])(int,int);
	int sum(int a,int b)
	{
		int z;
		z=a+b;
		return z;	
	}
		int sub(int a,int b)
	{
		int z;
		z=a-b;
		return z;	
	}
		int mul(int a,int b)
	{
		int z;
		z=a*b;
			return z;
	}
		int div(int a,int b)
	{
		int z;
		z=a/b;
			return z;
	}	
int main()
{
	int z,m,n,output;
	cout<<"enter the 0)sum 1)sub 2)mul 3)div";
	cin>>z;
    int (*funptr[4])(int,int); 
	switch(z)
	{
	    	case 0: cout<<"\nThe Sum is:";
		   funptr[0]=sum;
		   break;
		   	case 1: cout<<"\nThe Sub is";
		   funptr[1]=sub;
		   break;
		   	case 2: cout<<"\nThe Multiply is";
		   funptr[2]=mul;
		   break;
		   	default: cout<<"\nThe Div is";
		   funptr[3]=div;
	}
	cout<<"\nenter the value";
	cin>>m>>n;
	output=funptr[z](m,n);
	cout<<output;
}
