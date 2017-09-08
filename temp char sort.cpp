#include<iostream>
using namespace std;
template<class t>
void bubble(t a[],int n)
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
template<class x>
void swap(x &a,x &b)
{
	x temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n;
	string a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubble(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
