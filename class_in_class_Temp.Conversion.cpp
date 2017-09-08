#include<iostream>
#include<string.h>
using namespace std;
class fahrenit;
class celcius
{
	int cel;
	public:
		celcius(int c=0)
		{
			cel=c;
		}
		float getcel()
		{
			return 1.8*cel+32;
		}
};
class fahrenit
{
	int fahren;
	public:
		fahrenit(int f=0)
		{
			fahren=f;
		}
		fahrenit(celcius c)
		{
		  fahren=c.getcel();
		
		}
		void show()
		{
			cout<<fahren;
		}
};
int main()
{
	celcius c1(10);
	fahrenit f1;
	f1=c1;
	f1.show();
}
