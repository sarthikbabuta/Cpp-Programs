#include<iostream>
using namespace std;
class animal
{
	public:
		int legs;
		
};
class dog:public animal
{
	public:
		int tails;
		dog()
		{
			legs=4;
			tails=1;
			
		}
		
};
int main()
{
	dog d;
	cout<<d.legs<<" "<<d.tails;
}
