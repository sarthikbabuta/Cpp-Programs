#include<iostream>
#include<string.h>
using namespace std;
class a
{
	char ch1[100];
	char ch2[100];
	public:
		void read(void)
		{
			cout<<"enter the string 1";
			cin>>ch1;
			cout<<"enter the string 2";
			cin>>ch2;
		}
		void display()
		{
			strcat(ch1,ch2);
			cout<<"new string is: "<<ch1;
		}
	
};
int main()
{
	a a1;
	a1.read();
	a1.display();
}
	

