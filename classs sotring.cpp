#include<iostream>
using namespace std;
int n=5;
class sort
{
	int p[100];
	public:
		void get(int *d)
		{
			int i;
			for(i=0;i<n;i++)
			{
				p[i]=d[i];
			}
		}
		void display()
		{
			int i;
			cout<<"thee sorted array is";
			for(i=0;i<n;i++)
			{
				cout<<p[i];
			}
		}
		void fsort()
		{
			int i,j;
			for(i=0;i<n;i++)
			{
			   for(j=0;j<n-1;j++)
			   {
			   	if(p[j]>p[j+1])
			   	{
			   		int temp=0;
			   		temp=p[j];
			   		p[j]=p[j+1];
			   		p[j+1]=temp;
				}
			   }
			}
		}
		
};
int main()
{
	int a[100],i,j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort s;
	s.get(a);
	s.fsort();
	s.display();
	return 0;
}
