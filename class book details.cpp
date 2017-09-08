#include<iostream>
#include<string.h>
using namespace std;
class book
{
	char author[100],publisher[100],title[100],title1[100],author1[100];
	int price[100],stock[100],detail[100];
	public:
		void enter()
		{
		
			for(int i=0;i<2;i++)
			{
				cout<<"enter the detail"<<(i+1)<<"\n";
				cout<<"\nenter the book title\t";
				cin>>title[i];
				cout<<"\nenter the author name\t";
				cin>>author[i];
				cout<<"\nenter the publisher\t";
				cin>>publisher[i];
				cout<<"\nenter the price\t";
				cin>>price[i];
				cout<<"\nenter the stock\t";
				cin>>stock[i];
			}
		}
		void display()
		{
			for(int i=0;i<2;i++)
			{
				cout<<"\nBook title="<<title[i];
				cout<<"\nAuthor name="<<author[i];
				cout<<"\nPublisher="<<publisher[i];
				cout<<"\nPrice="<<price[i];
				cout<<"\nStock="<<stock[i];
			}
		}
		void getdata()
		{
			cout<<"\n\nenter the book title\t";
			cin>>title1;
			cout<<"\nenter the author name\t";
			cin>>author1;
		}
		void check()
		{
			for(int i=0;i<2;i++)
			{
				
		     	if(strcmp(title[i],title1)==0)
		       	{
				    cout<<"\nBook is found";
				    {
				     	if(strcmp(author[i],author1)==0)
					        {
					     	cout<<"\nAuthor is found";
				  	        }
				    }
			    }
			    else
			    {
			        cout<<"Not Found";	
			    }
			}
		}
};
int main()
{
	book b1;
	b1.enter();
	b1.display();
	b1.getdata();
	b1.check();
	return 0;
}
