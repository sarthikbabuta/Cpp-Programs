#include<iostream>
using namespace std;
int main()
{
	char **arr;
	int  size;
	cout<<"enter size";
	cin>>size;
	arr=new char*[size];
	cout<<"sucesss";
	cout<<"enter array";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		cin>>arr[i][j];
	    }
	}
	cout<<"element are";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		cout<<arr[i][j]<<"\n";
	    }
	}
	delete arr;
	return 0;
}
