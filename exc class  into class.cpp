#include<iostream>
using namespace std;
class Array
{
	int *arr,size;
	public:
		class error
		{
			
		};
		Array(int n)
		{
			size=n;
			arr=new int[size];
		}
		void read()
		{
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		void display()
		{
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<"\t";	
			}
		}
		int &operator[](int index)
		{
			if(index<0 || index>=size)
			throw error();
			else
			return arr[index];
		}
};
int main()
{
	int n;
	cout<<"enter size of array";
	cin>>n;
	Array A(n);
	cout<<"enter element ";
	A.read();
	cout<<"Entered array\n";
	A.display();
	try
	{
		A[2]=20;  //A.operator[] (i);
		A.display();
		A[3]=40;
		A.display();
		A[-1]=30;
		A.display();
	}
	catch(Array::error)
	{
		cout<<"out of bounds";	
	}
	cout<<"exiting main";
}
