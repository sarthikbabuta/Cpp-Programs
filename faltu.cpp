#include<iostream>
using namespace std;
#include<list>
#include<map>
#include<fstream>
#include<string.h>
#include<stack>
#include<set>
#include<vector>
#include<iterator>
#include<algorithm>
#include<deque>
#include<iomanip>

int main()
{
	
list<int>l;
for(int i=0;i<10;i++)
{
	l.push_back(i*10);
	
}
list<int>::iterator itr=l.begin();
advance(itr,5);
cout<<*itr;


	
	
}
