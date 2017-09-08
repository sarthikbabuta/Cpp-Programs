#include<iostream>
#include<string.h>
using namespace std;
class dist;
class heigth
{
	float  feet,inches;
	public:
	heigth(float f=0,float i=0)
	{
		feet=f;
		inches=i;
	}
	float  getheigth()
	{
		return (feet*30.48+inches*2.54);
    }
};
class dist
{
	float meter,centimeter;
	public:
	dist(int m=0,int cm=0)
	{
		meter=m;
		centimeter=cm;
	}
	dist(heigth h)
	{
		centimeter=h.getheigth();
		meter=centimeter/100;
		centimeter=centimeter%100;
	}
	void showdata()
	{
		cout<<meter<<" "<<centimeter<<"\n";
	}
};
int main()
{
	int m,n;
	heigth h1(5,10);
	dist d1;
	d1=h1;
	d1.showdata();
}
