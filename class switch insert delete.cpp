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
		void insert()
		{
			int k;
			cout<<"\nenter the pos";
			cin>>k;
			n=n+1;
		    for(int i=n;i>=k;i--)
			{
				p[i]=p[i-1];
		    }
		    cout<<"\nenter the element do you want to insert";
		    cin>>p[k];
			
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
	int a,i,j;
	cout<<"enter the the number which you want to do";
	cout<<"0)insert\t 1)delete\t 2)sort ";
	cin>>a;
	switch(a)
	{
	case 0:  sort s;
	         s.get();
	         s.fsort();
	         s.display();
	         s.insert();
	         s.fsort();
	         s.display();
	         break;
	         
	case 1: sort s1;
	         s1.get();
	         s1.fsort();
	         s1.display();
	         s1.deleted();
	         s1.fsort();
	         s1.display();
	         break;
	         
    default: sort s2;
	         s2.get();
	         s2.fsort();
	          s2.display();
      
    }
	return 0;
}
