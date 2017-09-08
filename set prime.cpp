#include<iostream>
using namespace std;
#include<set>
int main()
{
	set<int>s;
	set<int> ::iterator it;
	int num,flag=0;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
		cout<<i<<" ";
	    }
	}
}
