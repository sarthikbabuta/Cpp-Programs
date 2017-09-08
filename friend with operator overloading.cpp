#include<iostream>
using namespace std;
class ary
{
	int arr[10];
	int size;
	public:
		ary();
		ary(int n);
		void showdata();
	friend ary operator+(ary,ary);  //yeh do ki value 3 mein store ki hai
};
ary::ary()
{
	for(int i=0;i<10;i++) //it is used for initailsaion for c
	{
		arr[i]=0;
	}
	size=0;
} 
ary::ary(int n)
{
	size=n;
	cout<<"enter the element of the array\n";
	for(int i=0;i<n;i++)                 //used for initialisation for a,b
	{
		cin>>arr[i];
    }
}
void ary::showdata()
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
ary operator+(ary a1,ary a2)
{
	ary temp;
	temp.size=a1.size;
	for(int i=0;i<temp.size;i++)
	{
		temp.arr[i]=a1.arr[i]+a2.arr[i];
	}
	return temp;
}
int main()
{
	int n;
	cout<<"enter the size";
	cin>>n;
	ary A(n),B(n),C;
	C=A+B;
	cout<<"The resultant array is:\n";
	C.showdata();
	return 0;
}
