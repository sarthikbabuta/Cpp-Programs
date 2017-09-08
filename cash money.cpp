//bill class inherit cash-denomination(1,2,5,10,50,20,100,50,500,2000) and balance and cheque-cheque no, amount
//1 item=10
//10 item=100
#include<iostream>
using namespace std;
class bill
{
	protected:
		int id;
		char name[100];
		public:
			void get_bill()
			{
				cout<<"enter the id\n";
				cin>>id;
				cout<<"enter the name\n";
				cin>>name;
			}
};
class cash
{
	protected:
		int hundred,;
		int num;
		public:
			void get_cash()
			{
				cout<<"enter the rupees\n";
				cin>>num;
			}
			void put_cash()
			{
				
		
};
class cheque
{
	protected:
		int chequeno;
		int amount;
		public:
			void get_cheque()
			{
				cout<<"enter the cheque no\n";
				cin>>chequeno;
				cout<<"enter the amount\n";
				cin>>amount;
			}
			void put_cheque()
			{
				cout<<""
			}
}
