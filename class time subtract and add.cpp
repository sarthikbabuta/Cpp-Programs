#include<iostream>
using namespace std;
class time
{
	int hr;
	int min;
	int sec;
	public:
		void read(int h,int m)
		{
			hr=h;
			min=m;
		}
		void display(void)
		{
			cout<<"hr="<<hr<<"min="<<min<<"\n"<<"sec="<<sec;
		}
		void total(time t1,time t2)
		{
			//hr=t1.hr+t2.hr;
			//min=t1.min+t2.min;
			//hr=hr*60;
			//min=min*60;	
			//sec=hr+min;
		}
};
int main()
{
	time t1,t2,t3;
	t1.read(2,40);
	t2.read(3,50);
	t3.total(t1,t2);
	t1.display();
	t2.display();
	t3.display();
}
