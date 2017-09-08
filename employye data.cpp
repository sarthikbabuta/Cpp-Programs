#include<iostream>
using namespace std;
class employee
{
	char ename[100];
	int empno;
	int basic;
	float gross,da,tax,net;
	public:
		void get()
		{
			cout<<"enter employee name,number,basic salary";
			cin>>ename>>empno>>basic;
		}
		void put()
		{
			cout<<"net salary"<<net<<endl;
		}
		void calc()
		{
			da=0.52*basic;
			gross=basic+da;
			tax=0.30*gross;
			net=basic+da-tax;
		}
};
int main()
{
	int n,i;
	employee e[100];
	cout<<"enter number of employees";
	cin>>n;
	for(i=0;i<n;i++)
	{
		e[i].get();
	}
	for(i=0;i<n;i++)
	{
		e[i].calc();
	}
	for(i=0;i<n;i++)
	{
		e[i].put();
	}
	return 0;
}
