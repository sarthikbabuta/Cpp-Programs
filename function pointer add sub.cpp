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
	cout<<"enter the 0)Sum 1)Sub 2)Mul 3)Div";
	cin>>z;
	int (*funptr[4])(int,int);	
    funptr[0]=sum;
	funptr[1]=sub;
	funptr[2]=mul;
	funptr[3]=div;
	cout<<"enter the value";
	cin>>m>>n;
	cout<<funptr[z](m,n);
	//output=funptr[z](m,n);
	//cout<<output;
}
