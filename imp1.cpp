/*write a class that has class string with data member no of seats in first class,no of seats in  class 2tier,
no of seats in  class 3tier memberfunction to receive and display data. class reservation that has data member 
seat book in 1st tier and seat book in 2 tier and data memerber member function to book  and cancel status, 
 deatils status.*/
#include<iostream>
using namespace std;
class string1
{
	public:
		int no_first;
		int no_second;
		int no_third;
		void get()
		{
			cout<<"enter the no seats in 1st tier\n";
			cin>> no_first;
			cout<<"enter the no seats in 2nd tier\n";
			cin>> no_second;
			cout<<"enter the no seats in 3rd tier\n";
			cin>> no_third;
		}
		void put()
		{
			cout<<"\nenter the no seats in 1st tier\n";
		  cout<<no_first;
			cout<<"\nenter the no seats in 2nd tier\n";
			cout<<no_second;
			cout<<"\nenter the no seats in 3rd tier\n";
			cout<<no_third;
		}
};
class reservation:public string1
{
	public:
	int book_first;
		int book_second;
			int book_third;
			int cancel_first;
		int cancel_second;
			int cancel_third;
			void get_book()
			{
				cout<<"\nno of seat book in 1st tier\n";
				cin>>book_first;
					cout<<"\nno of seat book in 2nd tier\n";
				cin>>book_second;
					cout<<"\nno of seat book in 3rd tier\n";
				cin>>book_third;
			}
				/*void get_cancel()
			{
				cout<<"no of seat cancel in 1st tier\n";
				cin>>cancel_first;
					cout<<"no of seat cancel in 2nd tier\n";
				cin>>cancel_second;
					cout<<"no of seat cancel in 3rd tier\n";
				cin>>cancel_third;
			}*/
				void put_cancel()
			{
				cout<<"no of seat cancel in 1st tier\n";
				cout<<no_first-book_first;
					cout<<"\nno of seat cancel in 2nd tier\n";
				cout<<no_second-book_second;
					cout<<"\nno of seat cancel in 3rd tier\n";
				cout<<no_third-book_third;
			}
			/*	void put_book()
			{
				cout<<"no of seat book in 1st tier\n";
				cout<<book_first;
					cout<<"no of seat book in 2nd tier\n";
				cout<<book_second;
					cout<<"no of seat book in 3rd tier\n";
				cout<<book_third;
			}*/
};
int main()
{
	reservation r;
	r.get();
	r.get_book();
	r.put_cancel();
	
}
