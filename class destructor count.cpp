#include<iostream>
using namespace std;
int count=0;
class example
{
	public:
		example()
		{
			count++;
			cout<<"\nconstuctor called,object number"<<count<<endl;
		}
		~example()
		{
			cout<<"\ndestroying object"<<count<<endl;
			count--;
		}
};
int main()
{
	cout<<"creating first object in main";
	example e1;
	{
	cout<<"creating second and third object inside block";
	example e2,e3;
	cout<<"exting block";
    }
	cout<<"exiting main";
	return 0;
	
	
	
}
