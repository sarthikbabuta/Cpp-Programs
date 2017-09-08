#include<iostream>
using namespace std;
class arr
{
	int a[5];
	public:
		arr(int *A)
		{
			int i;
			for(i=0;i<5;i++)
			{
				a[i]=A[i]+5;
			}
		}
		int operator[](int k)
		{
			return (a[i]);
		}
};
int main()
{
	int x[5]={1,2,3,4,5};
	arr A(x);
	int i;
	for(i=0;i<5;i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;                           
}
