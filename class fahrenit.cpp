#include<iostream>
#include<string.h>
using namespace std;
class temp
{
    float   c;
	public:
		void getdata()
		{
			cin>>c;
		}
		operator float()
		{
			return 1.8*c+32;
		}
};
int main()
{
float mt;
	temp t;
	t.getdata();
	mt=t;
	cout<<mt;
}
	
