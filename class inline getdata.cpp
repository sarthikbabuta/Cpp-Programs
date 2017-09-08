#include<iostream>
using namespace std;
class item
{
	int number;
	float cost;
	public:
		void getdata(int n,float c)
		{
			number=n;
			cost=c;
		}
		void putdata(void);
};
inline void item :: putdata()
{
	cout<<"\nnumber="<<number;
	cout<<"\ncost="<<cost;
}
int main()
{
	item I1,I2;
	I1.getdata(100,250.50);
	I1.putdata();
	I2.getdata(200,150.0);
	I2.putdata();
	return 0;
}
