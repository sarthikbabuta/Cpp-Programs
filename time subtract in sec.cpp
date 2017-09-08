#include<iostream>
using namespace std;
class time
{
	int hr;
	int min;
	int sec;
	int hrs;
	int mins;
	
	public:
		void read(int h,int m,int s)
		{
			hr=h;
			min=m;
			sec=s;
		}
		void display(void)
		{
			
			cout<<"hr="<<hr<<" min="<<min<<"sec="<<sec<<"\n";
		}
		void subtract(time t1,time t2)
		{
				if(t1.hr>t2.hr)
		{
			min=t1.min+t2.min;
			secc=t1.sec+t2.sec;
			
		}
		void convert
};
int main()
{
	time t1,t2,t3,t4;
	t1.read(2,40);
	t2.read(3,50);
	t3.total(t1,t2);
	t4.subtract(t1,t2);
	t1.display();
	t2.display();
	t3.display();
	t4.display();
}
