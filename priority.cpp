#include<iostream>
using namespace std;
#include<queue>
int main()
{
	int num;
	priority_queue<int>pq;
	for(int i=0;i<5;i++)
	{
	cin>>num;
	pq.push(num);
	}
		for(int i=0;i<5;i++)
	{
    cout<<pq.top()<<endl;
	pq.pop();
	}
}
