/*write a pro tht a class distance with mem km ,m derive classes school and office which store diistance
form the house to school and office  along with another detail*/
#include<iostream>
using namespace std;
class distance
{
	public:
		float km,m;	
};
class school:public distance
{
	public:
	void get_school()
	{
		cout<<"enter the distance from km to m from school"; 
		cin>>km>>m;
	}
	
	void put_school()
	{
		cout<<"distance from school to office\n";
		km=km+m/1000;
		cout<<km;
	}
};
class office:public distance
{
	public:
		get_school();
		put_school();
		void put_distance()
	{
		cout<<"distance from office to school\n";
		km=km+m/1000;
		cout<<km;
	}
		
};
int main()
{
	office d;
	d.get_school();
	d.put_school();
	d.put_distance();
}
