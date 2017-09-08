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
		void putdata()
		{
			cout<<ch1;
		}
		friend cat operator+(cat,cat);
};
cat operator+(cat c1,cat c2)
{
	cat temp;
	strcpy(temp.ch1,c1.ch1);
	strcat(temp.ch1,c2.ch1);
	return temp;
}
int main()
{
	cat A,B,C;
	A.getdata();
	B.getdata();
	C=A+B;
	C.putdata();
}
