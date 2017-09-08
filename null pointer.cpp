#include<iostream>
using namespace std;
int main()
{
	int *ptr,a;
	ptr=NULL;
	if(ptr==NULL)
	{
		ptr=&a;
		(*ptr)++;
	}
	cout<<ptr;
	return 0;
}
