#include<iostream>
using namespace std;
class increment;
class employee
{
	int deptid;
	float sal;
	public:
		friend class increment;
		void getdata();
		void showdata();
		
};
void employee::getdata()
{
	cout<<"\nenter dept id";
	cin>>deptid;
	cout<<"\nenter sal";
	cin>>sal;
}
void employee::showdata()
{
	cout<<"\ndept"<<deptid;
	cout<<"\nsal"<<sal;
}
class increment
{
	public:
		void inc(employee&e)
		{
			if(e.deptid==0)
			e.sal+=10000;
			else
			e.sal+=20000;
		}
};
int main()
{
	employee e;
	increment i;
	e.getdata();
	e.showdata();
	i.inc(e);
	cout<<"\nafter increment";
	e.showdata();
}
