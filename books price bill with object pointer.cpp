#include<iostream>
using namespace std;
class example
{
	int qty,price;
	char books[10];
	public:
	void getdata()
	{
		cout<<"enter the Books";
		//for(int i=0;i<n;i++)
		//{
	    cin>>books;
		cout<<"enter the Quantity";
		cin>>qty;
		cout<<"enter the Price";
		cin>>price;
	}
	void putdata()
	{
		int bill=0;
		int n;
		for(int i=0;i<qty;i++)
		{
		bill=price*qty;
	    }
	    cout<<books;
		cout<<" price is ";
	    cout<<bill;
	  
	}
};
int main()
{
	example s;
	example *ptr;
	ptr=&s;
	ptr->getdata();
	ptr->putdata();
	return 0;
}
