#include<iostream>
using namespace std;
#include<map>
int main()
{
	pair<char,int>x;
	map<char,int>m;
	for(char ch='a';ch<='z';ch++)
	{
		x.first=ch;
		x.second=ch;
		m.insert(x);
	}
	map<char,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	it=m.find('j');
	
		cout<<(*it).second;
	
	
}
