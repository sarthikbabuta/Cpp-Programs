#include<iostream>
using namespace std;
int n=5;
class sort
{
	int p[100];
	public:
		void get()
		{
			int i;
			cout<<"\nenter the element";
			for(i=0;i<n;i++)
			{
				cin>>p[i];
			}
		}
		void display()
		{
			int i;
			cout<<"\nthe sorted array is";
			for(i=0;i<n;i++)
			{
				cout<<p[i]<<" ";
			}
		}
		void deleted()
		{
			int k;
				n=n-1;
			cout<<"\nenter the pos";
			cin>>k;
		
		    for(int i=k;i<=n;i++)
			{
				p[i]=p[i+1];
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
	sort s;
	s.get();
	s.fsort();
	s.display();
	s.deleted();
	s.fsort();
	s.display();
	return 0;
}
