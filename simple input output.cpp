#include<iostream>
using namespace std;
int main()
{
	int *arr;
	int size;
	cout<<"enter size";
	cin>>size;
	arr=new int[size];
	cout<<"sucesss";
	cout<<"enter array";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"element are";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\n";
	}
	delete arr;
	return 0;
}
