#include<iostream>
using namespace std;
#include<list>
int main()
{
	int num,large,small;
	list<int>l1;
	list<int>l2;
	list<int>::iterator itr;
	cout<<"enter the elements";
	for(int i=0;i<5;i++)
	{
		cin>>num;
		l1.push_back(num);
	}
	for(itr=l1.begin();itr!=l1.end();itr++)
	{
		if(num>large)
		{
			large=num;
		}
	    if(num<small)
		{
			small=num;
		}	
	}
	cout<<"\n"<<large<<" "<<small;
}

