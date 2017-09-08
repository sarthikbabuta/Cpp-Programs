#include<iostream>
using namespace std;
class xyz;
class abc
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		
		void display()
		{
			cout<<data<<endl;
		}
		friend void swap(abc &,xyz &);
};
class xyz
{
	int data;
	public:
		void setvalue(int value)
		{
			data=value;
		}
		void display()
		{
			cout<<data<<endl;
		}
			friend void swap(abc &,xyz &);
};
void swap(abc  &obj1,xyz  &obj2)
{
	int temp;
	temp=obj1.data;
	obj1.data=obj2.data;
	obj2.data=temp;
}
int main()
{
	abc s;
	xyz w;
	s.setvalue(5);
	w.setvalue(3);
	swap(s,w);
	s.display();
	w.display();
	return 0;
}
