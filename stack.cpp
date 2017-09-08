#include<iostream>
using namespace std;
#include<stack>
int main()
{
	stack<int>s;
	s.push(5);
	s.push(3);
	s.push(2);
	cout<<"size of stack"<<s.size()<<endl;
	while(!s.empty())
	{
		cout<<"popping"<<s.top()<<endl;
		s.pop();
	}
	cout<<"size of stack"<<s.size()<<endl;
}
