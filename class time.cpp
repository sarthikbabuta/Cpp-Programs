#include<iostream>
using namespace std;
class time
{
	int hours;
	int minutes;
	public:
		void gettime(int h,int m)
		{
			hours=h;
			minutes=m;
	
		}
		void puttime(void)
		{
			cout<<hours<<"hours and "<<minutes<<"minutes\n";
		}
		void sum(time t1,time t2)
		{
			minutes=t1.minutes+t2.minutes;
			hours=t1.hours+t2.hours;
			if(minutes>=60)
			{
				hours+=minutes/60;
				minutes=minutes%60;
			}
		}
};
		int main()
		{
			time t1,t2,t3;
			t1.gettime(2,40);
			t2.gettime(3,50);
			t3.sum(t1,t2);
			t1.puttime();
			t2.puttime();
			t3.puttime();
			return 0;
		}
