#include<iostream>
using namespace std;
class time
{
	int h,m;
	public:
		time()
		{
			h=0;
			m=0;
		}
		time(int t)
		{
			h=t/60;
			m=t%60;
		}
		void getdata()
		{
			cin>>h>>m;
		}
		void showdata()
		{
			cout<<"hrs="<<h<<"min="<<m;
		}
};
int main()
{
	int mins;
	cout<<"enter mins";
	cin>>mins;
	time t1(mins);
	t1.getdata();
	t1.showdata();
	return 0;
}
