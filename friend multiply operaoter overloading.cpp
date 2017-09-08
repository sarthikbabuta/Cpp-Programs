#include<iostream>
using namespace std;
class ary
{
	int arr[10][10];
	int size;
	public:
		ary();
		ary(int n);
		void showdata();
	friend ary operator*(ary,ary);  //yeh do ki value 3 mein store ki hai
};
ary::ary()
{
	for(int i=0;i<10;i++) //it is used for initailsaion for c
	{
		for(int j=0;j<10;j++)
		{
		arr[i][j]=0;
	    }
	}
	size=0;
} 
ary::ary(int n)
{
	size=n;
	cout<<"enter the element of the array\n";
	for(int i=0;i<n;i++)                 //used for initialisation for a,b
	{
		for(int j=0;j<n;j++)
		{
		cin>>arr[i][j];
	    }
    }
}
void ary::showdata()
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		cout<<arr[i][j]<<"\t";
	    } 
		cout<<"\n"; 
	}
}
ary operator*(ary a1,ary a2)
{
	ary temp;
	temp.size=a1.size;
	for(int i=0;i<temp.size;i++)
	{
		for(int j=0;j<temp.size;j++)
		{
			for(int k=0;k<temp.size;k++)
			{
				temp.arr[i][j]+=a1.arr[i][k]*a2.arr[k][j];
			}
		}
	}
	return temp;
}
int main()
{
	int n;
	cout<<"enter the size";
	cin>>n;
	ary A(n),B(n),C;
	C=A*B;
	cout<<"The resultant array is:\n";
	C.showdata();
	return 0;
}
