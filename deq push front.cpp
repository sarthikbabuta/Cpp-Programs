#include<deque>
#include<iostream>
using namespace std;
int main()
{
	int num,num1;
	deque<int>deq;
	cout<<"\nenter element";
	for(int i=0;i<5;i++)
	{
		cin>>num;
		deq.push_front(num);
		cin>>num;
		deq.push_back(num);
	}

	cout<<"\n\nelement are\n";
	for(int i=0;i<deq.size();i++)
	{
		cout<<deq[i]<<"\t";	
	}
	
	deq.pop_back();
	cout<<"\n\nelement are\n";
	for(int i=0;i<deq.size();i++)
	{
		cout<<deq[i]<<"\t";	
	}
	
	deq.pop_front();
	cout<<"\n\nelement are\n";
	for(int i=0;i<deq.size();i++)
	{
		cout<<deq[i]<<"\t";	
	}
	
	
}
