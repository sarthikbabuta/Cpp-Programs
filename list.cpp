#include<list>
#include<iostream>
using namespace std;
int main()
{
	int num,option;
	list<int>l1;
	list<int>l2;
	list<int>::iterator itr;
	cout<<"\nenter the elements of 1 list\n";
	for(int i=0;i<4;i++)
	{
		cin>>num;
		l1.push_back(num);
	}
	cout<<"\nenter the elements of 2 list\n";
	for(int i=0;i<4;i++)
	{
		cin>>num;
		l2.push_back(num);
	}
	l1.reverse();
	cout<<"\nreverse\n";
	for(itr=l1.begin();itr!=l1.end();itr++)
	{
		cout<<(*itr)<<"\t";
	}
	cout<<"\nsort\n";
	l2.sort();
    for(itr=l2.begin();itr!=l2.end();itr++)
	{
		cout<<(*itr)<<"\t";
	}
	cout<<"\nmerge\n";
	l1.reverse();
	l1.merge(l2);
    for(itr=l1.begin();itr!=l1.end();itr++)
	{
		cout<<(*itr)<<"\t";
	}
}
