#include<iostream>
using namespace std;
class c;
class b;
class a
{
	int x;
	public:
		void read()
		{
			cout<<"enter the no";
			cin>>x;
		}
		friend void large(a,b,c);
};
class b
{
	int y;
	public:
		void read()
		{
			cout<<"enter the no";
			cin>>y;
		}
		friend void large(a,b,c);
};
class c
{
	int z;
	public:
		void read()
		{
			cout<<"enter the no";
			cin>>z;
		}
		friend void large(a,b,c);
};
void large(a t1,b t2,c t3)
{
	if(t1.x>=t2.y&&t1.x>=t3.z)
	{
		cout<<"largest is in class a="<<t1.x;
	}
	else if(t2.y>=t1.x&&t2.y>=t3.z)
	{
		cout<<"largest is in class b="<<t2.y;
	}
	else if(t3.z>=t1.x&&t3.z>=t2.y)
	{
		cout<<"largest is in class c="<<t3.z;
	}	
}
int main()
{
	a m;
	b n;
	c o;
	m.read();
	n.read();
	o.read();
	large(m,n,o);
	return 0;
}
