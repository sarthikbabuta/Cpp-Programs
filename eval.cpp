#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int arr1[20],arr2[20],i,j,n;
	cout<<"enter the no of terms";
	cin>>n;
	cout<<"enter the value of arr1";
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter the value of arr2";
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
		cout<<"enter the value of arr1";
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<"enter the value of arr2";
	for(int i=0;i<n;i++)
	{
		cout<<arr2[i]<<" ";
	}
	
}
