#include<iostream>
using namespace std;
class volume
{
	float l,b,h,v;
	public:
		void gettime(void)
		{
			cout<<"enter the lenght,breadth,height";
			cin>>l>>b>>h;

		}
		void puttime(void)
		{
			v=l*b*h;
			cout<<"volume of cuboid="<<v;
		}
};
		int main()
		{
		    volume v1;
			v1.gettime();
			v1.puttime();
			return 0;
		}
