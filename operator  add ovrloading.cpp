#include<iostream>
using namespace std;
class matrix
{
	int arr[10];
	int size;
	public:
		matrix();
		matrix(int n);
		void showdata();
		friend matrix operator+(matrix,matrix);
}
matrix::matrix()
{
	for(int i=0;i<n;i++)
	{
		arr[i]=0;
	}
	size=0;
}
matrix::matrix(int n)
{
	size=n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void matrix::showdata()
{
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
matrix operator+(matrix a1,matrix a2)
{
	matrix temp;
	temp.size=a1.size;
	for(i=0;i<temp.size;i++)
	{
	temp.arr[i]=a1.arr[i]+a2.arr[i];
    }
	return temp;
 } 
 int main()
 {
 	arr A(n),B(n),C;
 	cin>>n;
 	C=A+B;
 	C.showdata();
 	
 }
