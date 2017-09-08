#include<iostream>
using namespace std;
class dist
{
	int km,m;
	public:
		void getdata()
		{
			cin>>km>>m;
		}
		operator int()
		{
			int temp;
			temp=km*1000+m;
			return temp;
		}
};
int main()
{
	int mt;
	dist d1;
	d1.getdata();
	mt=d1;
	cout<<"metre="<<mt;
	return 0;
}
