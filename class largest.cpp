#include<iostream>
using namespace std;
class set 
{
	int m,n;
	public:
		void input(void)
		{
				cout<<"enter m&n";
	cin>>m>>n;
		}
		void display(void)
		{
				cout<<"largest value"<<largest()<<endl;
		}
		int largest(void)
		{
		if(m>=n)
	return m;
	else
	return n;
		}
};
/*int set :: largest(void)
{
	if(m>=n)
	return m;
	else
	return n;
}
void set:: input(void)
{
	cout<<"enter m&n";
	cin>>m>>n;
}
void set :: display(void)
{
	cout<<"largest value"<<largest()<<end;
}*/
int main()
{
	set a,b;
	a.input();
	a.display();
//	b.input();
//	b.display();
	return 0;
}
