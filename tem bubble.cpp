#include<iostream>
using namespace std;
template<class T>
void bubble(T a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}
template<class X>
void swap(X a,X b)
{
	X temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a[5];
	float b[5];
	cout<<"enter integer elements";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n enter float elements";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	bubble(a,5);
	bubble(b,5);
	cout<<"\n sorted int array \n";
	for(int i=0;i<5;i++)
	{
	cout<<a[i]<<"\t";
	}
	cout<<"\n";
	cout<<"\n sorted float array \n" ;
	{
	for(int i=0;i<5;i++)
	cout<<b[i]<<"\t";
	}
	cout<<"\n";
	return 0;
}
