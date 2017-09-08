#include<iostream>
using namespace std;
class time
{
	float m,c;
	public:
		void gettime(void)
		{
			cout<<"enter the meter";
			cin>>m>>c;

		}
		void puttime(void)
		{
			m=m*100;
			m=m+c;
			cout<<m<<"cm";
		}
};
		int main()
		{
			time t1;
			t1.gettime();
			t1.puttime();
			return 0;
		}
