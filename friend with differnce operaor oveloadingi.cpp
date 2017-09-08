#include<iostream>
using namespace std;
class point
{
	int arr[10];
	int size;
	public:
		point();
		point(int n);
		void showdata();
	friend point operator+(point,point);
	friend point operator-(point,point);
	friend point operator*(point,point);
	friend point operator/(point,point);     //yeh do ki value 3 mein store ki hai
};
point::point()
{
	for(int i=0;i<10;i++) //it is used for initailsaion for c
	{
		arr[i]=0;
	}
	size=0;
} 
point::point(int n)
{
	size=n;
	cout<<"enter the element of the array\n";
	for(int i=0;i<n;i++)                 //used for initialisation for a,b
	{
		cin>>arr[i];
    }
}
void point::showdata()
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
point operator+(point a1,point a2)
{
	point temp;
	temp.size=a1.size;
	for(int i=0;i<temp.size;i++)
	{
		temp.arr[i]=a1.arr[i]+a2.arr[i];
	}
	return temp;
}
point operator-(point a1,point a2)
{
	point temp;
	temp.size=a1.size;
	for(int i=0;i<temp.size;i++)
	{
		temp.arr[i]=a2.arr[i]-a1.arr[i];
	}
	return temp;
}
point operator*(point a1,point a2)
{
	point temp;
	temp.size=a1.size;
	for(int i=0;i<temp.size;i++)
	{
		temp.arr[i]=a2.arr[i]*a1.arr[i];
	}
	return temp;
}
point operator/(point a1,point a2)
{
	point temp;
	temp.size=a1.size;
	for(int i=0;i<temp.size;i++)
	{
		temp.arr[i]=a2.arr[i]/a1.arr[i];
	}
	return temp;
}
int main()
{
	int n;
	cout<<"enter the size";
	cin>>n;
    point A(n),B(n),C,D,E,F;
	C=A+B;
	D=B-A;
	E=A*B;
	F=A/B;
	cout<<"The resultant array of addition is:\n";
	C.showdata();
	cout<<"\nThe resultant array of subtraction is:\n";
	D.showdata();
	cout<<"\nThe resultant array of multiply is:\n";
	E.showdata();
	cout<<"\nThe resultant array of division is:\n";
	F.showdata();
	return 0;
}
