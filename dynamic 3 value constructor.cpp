#include<iostream>
using namespace std;
class dcom
{
	int *ptr,*ptr1,*ptr2,*ptr3;
	public:
	/*	dcom()
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
		}*/
		dcom(int a,int b,int c)
		{
			ptr1=new int;
			*ptr1=a;
			ptr2=new int;
			*ptr2=b;
			ptr3=new int;
			*ptr3=c;
		}
		int display1()
		{
			return (*ptr1);
		   
		}
			int display2()
		{
			return (*ptr2);
		   
		}
			int display3()
		{
			return (*ptr3);
		   
		}
		
};
int main()
{
	//dcom obj1,obj2(150);
    dcom obj3(10,20,30);
 //	cout<<"value of obj1 is="<<obj1.display()<<endl;
   // cout<<"value of obj2 is="<<obj2.display()<<endl;
    cout<<"value of obj3 is="<<obj3.display1()<<" "<<obj3.display2()<<" "<<obj3.display3()<<endl;
	return 0;
}
