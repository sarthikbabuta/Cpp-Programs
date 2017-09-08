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
	cout<<"enter no before which must be inserted";
	cin>>num;
	list<int>:: iterator itr;
	itr=find(l.begin(),l.end(),num);
	cout<<"enter the no be inserted";
	cin>>num;
	l.insert(itr,num);
	for(itr=l.begin();itr!=l.end();itr++)
	{
		cout<<*itr;
	}

}
