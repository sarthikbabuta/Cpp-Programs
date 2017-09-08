 #include<iostream>
 using namespace std;
int f1();
int f2();
static int a=4,b=3;
int main()
{
	f1();
	f2();
	
}
int f1()
{
	a=a+b;
	cout<<a<<" ";
	
}
int f2()
{
	int c;
	c=a+b;
	cout<<c<<" ";
	
}
