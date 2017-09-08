#include<iostream>
using namespace std;
int main()
{
	int x=40;
	char ch='z';
	void *ptr;
	ptr=&x;
	cout<<"ptr int value"<<*(int*ptr);
	ptr=&ch;
	cout<<"ptr char value"<<*(char*ptr);
	return 0;
}
