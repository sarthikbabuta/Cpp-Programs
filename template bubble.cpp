#include<iostream>
using namespace std;
template<class T>
void bubble(T a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;i<j;j++)
		{
			if(a[j]<a[j-1])
			{
				swap(a[j],a[j-1]);
				
			}
		}
	}
}
template<class X>
void swap(X &a,X &b)
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
	cout<<"enter integer element";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the float element";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	bubble(a,5);
	bubble(b,5);
	cout<<"sorted int array";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
		cout<<"\n";
	}
	cout<<"sorted float routing";
	for(int i=0;i<5;i++)
	{
		cout<<b[i]<<"\t";
		cout<<"\n";
	}
	
}
