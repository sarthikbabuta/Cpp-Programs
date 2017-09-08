#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
	int num;
	list<int>l;
	cout<<"enter element of list";
	for(int i=0;i<=10;i++)
	{
		cin>>num;
		l.push_back(num);
		
	}
	list<int>:: iterator itr;
	itr=min_element(l.begin(),l.end());
	cout<<"the min element"<<*itr;
	itr=max_element(l.begin(),l.end());
		cout<<"the max element"<<*itr;

}
