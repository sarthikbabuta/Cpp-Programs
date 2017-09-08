#include<iostream>
using namespace std;
int const size=3;
template<class T>
class vector
{
	T *v;
	public:
		vector(T *a)    //basee address jo main se pass hoga
		{
			v=new T[size];
			for(int i=0;i<size;i++)
			{
				v[i]=a[i];
			}
		}
T operator*(vector y)
{
	T sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=v[i]*y.v[i];
	}
	return sum;
}
void display()
{
	for(int i=0;i<size;i++)
	{
		cout<<v[i]<<"\t";
		cout<<"\n";
	}
}
};
int main()
{
	int x[3]={1,2,3};
	int y[3]={4,5,6};
	vector<int>v1(x);
	vector<int>v2(y);
	cout<<"v1=";
	v1.display();
	cout<<"v2=";
	v2.display();
	cout<<"v1*v2="<<v1*v2; 
	/*
	1 2 3
	4 5 6
	4+10+18=32
	*/
}
