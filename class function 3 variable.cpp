#include<iostream>
using namespace std;
class abc
{
	int *ptr;
	public:
			abc()
			{
				ptr=new int;
				*ptr=10;
			}
			abc(int v)
			{
				ptr=new int;
				*ptr=v;
			}
			abc(int a,int b,int c)
			{
				ptr=new int[3];
				ptr[0]=a;
				ptr[1]=b;
				ptr[2]=c;
			
				
			}
			int display()
			{
				cout<<*ptr<<endl;
			}
			int display2()
			{
				for(int i=0;i<3;i++)
				{
					cout<<ptr[i]<<endl;
				}
			}
};
int main()
{
	abc obj1,obj2(100),obj3(10,20,30);
	obj1.display();
	obj2.display();
	obj3.display2();
	return 0;
	
}
