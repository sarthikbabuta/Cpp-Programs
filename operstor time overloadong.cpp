#include<iostream>
using namespace std;
class time 
{
	int min;
	int sec;
	public:
		time();
		time(int a,int b);
		void showdata();
		friend time operator+(time,time);
		friend time operator-(time,time);
	    friend void operator++(time &t1);
	     friend void operator--(time &t2);
};
time::time()
{
	
}
time::time(int a,int b)
{
	min=a;
	sec=b;
}
void time::showdata()
{
	cout<<min<<"min "<<sec<<"sec";
}

time operator+(time t1,time t2)
{
	time temp;
	temp.min=t1.min+t2.min;
	temp.sec=t1.sec+t2.sec;
	if(temp.sec>60)
	{
		temp.min=temp.min+1;
		temp.sec=temp.sec-60;
	}
	return temp;
	
}
time operator-(time t1,time t2)
{
	time temp;
	temp.min=t1.min-t2.min;
	temp.sec=t1.sec-t2.sec;
	return temp;
	
}
void operator++(time & t1)
{
	++ t1.min;
	++t1.sec;
	if(t1.sec>=60)
	{
		t1.min=t1.min+1;
		t1.sec-=60;
	}
}
void operator--(time & t1)
{
	-- t1.min;
	--t1.sec;
	/*if(t1.sec>=60)
	{
		t1.min=t1.min-1;
		t1.sec+=60;
	}*/
}
int main()
{
	time A(30,50),B(20,20),C,D,E(20,21),F(22,23);
	C=A+B;
	D=A-B;
	++E;
	--F;
	cout<<"the resultant array is:\n";
	C.showdata();
	cout<<"\n";
	D.showdata();
	cout<<"\n";
	E.showdata();
	cout<<"\n";
	F.showdata();

	return 0;
}
