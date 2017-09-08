#include<iostream>
using namespace std;
#include<queue>
int main()
{
	queue<int>q;
	for(int i=0;i<5;i++)
	{
		cout<<"enqueing"<<i<<endl;
		q.push(i);
	}
	cout<<"size of queue"<<q.size()<<endl;
		cout<<"back of a"<<q.back()<<endl;
	while(!q.empty())
	{
		cout<<"dequeing"<<q.front()<<endl;
		q.pop();
	}
	cout<<"size of queue"<<q.size()<<endl;
}
