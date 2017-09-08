#include<iostream>
using namespace std;
class two;
class one
{
	int bs;
	public:
		void get()
		{
			int bs;
			cin>>bs;
		}
		friend void display(one,two);
};
class two
{
	int da;
	int hra;
	int gross;
	int tax;
	public:
		friend void display(one,two);
};
void display(one a,two b)
{
	cout<<a.bs<<"\n";
	b.da=a.bs/10;
	b.hra=a.bs*40/100;
	if(a.bs>10000)
	{
		b.tax=a.bs/10;
	}
	else
	b.tax=a.bs*8/100;
	b.gross=a.bs+b.da+b.hra-b.tax;
	cout<<b.gross;
}
int main()
{
	one one1;
	one1.get();
	two two2;
	display(one1,two2);
}
