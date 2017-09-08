#include<iostream>
#include<string.h>
using namespace std;
class cat
{
	char ch1[100];
	public:
		void getdata()
		{
			cout<<"enter the string";
			cin>>ch1;
		}
		 void showdata()
	{
        cout<<ch1<<endl;
    }
		friend int operator>(cat,cat);
};
int operator>(cat c1,cat c2)
{
	if(c1.ch1>c2.ch1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	cat A,B;
	A.getdata();
	B.getdata();
	int C;
	C=A>B;
	if(C==1)
	{
		cout<<"greater is\n";
		A.showdata();
	}
	else
	{
		cout<<"not greater";
	}
	
}
