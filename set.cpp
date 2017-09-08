#include<set>
#include<iostream>
using namespace std;
int main()
{
	set<int>s;
	for(int i=0;i<10;i++)
	{
		s.insert(i);
	}
	set<int>::iterator it;
	it=s.find(6);
	s.insert(1);
	s.erase(it);
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<(*it);
	}
}
