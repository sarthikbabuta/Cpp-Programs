#include<iostream>
using namespace std;
class bank
{
	float principle;
	float rate;
	float time;
	float intrest;
	public:
		void getdata(float p,float r,float t)
		{
			principle=p;
			rate=r;
			time=t;
			intrest=(principle*rate*time)/100;
			
		}
		void putdata(void);
};
void bank :: putdata()
{
	cout<<"\nintrest="<<intrest;
}
int main()
{
	bank B1,B2;
	B1.getdata(1000.0,8.5,10.0);
	B1.putdata();
	B2.getdata(2.0,5.0,3.0);
	B2.putdata();
	return 0;
}
