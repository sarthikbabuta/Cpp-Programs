//class employee has member id,desingnation,name.employee is inherited by two differnt class contract and permant
//contract ->mem hrs,vages per hour
//permant->basic pay,da,ta,hra
//gross sal ?
//contact goss=no of hrs*per hr;
//gross=basic pay,da,ta,hra
#include<iostream>
using namespace std;
class employee
{
	protected:
		int id;
		char designation[];
		char name[100];
		public:
			void getdata()
			{
				cin>>name;
				cin>>id;
				cin>>designation;
			}
};
class contract:public employee
{
	protected:
		int hrs;
		int wages;
		int sal;
		public:
			void input()
			{
			
				cout<<"Enter wage per hour and number of hours";
				cin>>hrs;
				cin>>wages;
			}
			void display()
			{
				sal=wages*hrs;
				cout<<"total salary="<<sal<<endl;
			}
};
class permanent : public employee
{
	protected:
		float pay;
		float da;
		float ta;
		float hra;
		float gsal;
		public:
			void insert()
			{
				
				
				cout<<"enter pay,day,ta,hra";
				cin>>pay;
				cin>>da;
				cin>>ta;
				cin>>hra;
			}
			void display()
			{
				da=pay*da/100;
				ta=pay*ta/100;
				hra=pay*hra/100;
				gsal=pay+da+ta+hra;
				cout<<"salary="<<gsal<<endl;
			}
};
int main()
{
	contract c;
	permanent d;
	c.getdata();
	c.input();
	c.display();
	d.getdata();
	d.insert();
	d.display();
	return 0;
}
