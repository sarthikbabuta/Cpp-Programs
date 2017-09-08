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
	/*	time(int t)
		{
			h=t/60;
			m=t%60;
		}*/
		void getdata()
		{
			cin>>h>>m;
		}
	/*	void showdata()
		{
			cout<<"hrs="<<h<<"min="<<m;
		}*/
		operator int()
		{
			int temp;
			temp=h*60+m;
			return temp;
		}
};
int main()
{
	int mins;
	cout<<"enter mins";
	cin>>mins;
	time t2;
	t2.getdata();
	mins=t2;
	cout<<"mins="<<mins;
	//t1.showdata();
	return 0;
}
