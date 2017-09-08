#include<iostream>
using namespace std;
class dcom
{
	int *ptr;
	public:
		dcom()
		{
			ptr=new int;
			*ptr=10;
		}
		dcom(int v)
		{
			ptr=new int;
			*ptr=v;
		}
		int display()
		{
			return (*ptr);
		}
};
int main()
{
	dcom obj1,obj2(150);
	cout<<"value of obj1 is="<<obj1.display()<<endl;
    cout<<"value of obj2 is="<<obj2.display()<<endl;
	return 0;
}
