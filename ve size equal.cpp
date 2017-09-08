#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,num4,flag=0;;
	vector<int>vect1;
	vector<int>vect2;
	cout<<"\nenter num1\n";
	cin>>num1;
	cout<<"\nenter num2\n";
	cin>>num2;
	cout<<"\nenter the 1\n";
	for(int i=0;i<num1;i++)
	{
		cin>>num3;
		vect1.push_back(num3);
	}
	cout<<"enter the 2\n";
	for(int i=0;i<num2;i++)
	{
		cin>>num4;
		vect2.push_back(num4);
	}
	if(num1==num2)
	{
		for(int i=0;i<num1;i++)
		{
			if(vect1[i]==vect2[i])
			{
				flag=1;
			}
			else
	{
		flag=0;
	}
		}
	}
	
	if(flag==1)
	{
		cout<<"\nequal\n";
		for(int i=0;i<num1;i++)
		{
		  cout<<vect1[i]<<"\t";
		}
	}
	else
	{
		cout<<"\nnot equal\n";
	}
}
