#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,pos,l,j,temp;
	cout<<"enter size";
	cin>>l;
	cout<<"enter array";
	for(int i=0;i<l;i++)
	{
		cin>>arr[i];
		
	}
	for(int i=0;i<l;i++)
	{
	
		for(int j=0;j<l-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
    for(int i=0;i<l;i++)
	{
		cout<<"\n"<<arr[i]<<" "<<"pos"<<i;
		
	}
}
