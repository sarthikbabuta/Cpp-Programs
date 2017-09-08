#include<iostream>
using namespace std;
class c;
class f
{
	float t;
	public:
		f(float x=0)
		{
			t=x;
		}
		void showdata()
		{
			cout<<"f="<<t;
		}
};
class c
{
    float t1;
	public:
		c(float y=0)
		{
			t1=y;
		}
     	operator f()
		{
			float t2;
			t2=(1.8*t1)+32; //t1 celcius
			//f a(c);
			return t2;
		}
};
int main()
{
     c T1(2);
     f T2;
	T2=T1;
	T2.showdata();
	return 0;
}
