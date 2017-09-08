#include<iostream>
using namespace std;
class B
{
	int a;
	public:
		int b;
		void set_ab();
     	int get_a(void);
		void show_a();
};
class D: public B
{
	int c;
	public:
		void mul(void);
		void display(void);
};
void B::set_ab(void)
{
	a=5,b=10;
	
}
int B::get_a()
{
	return a;
} 
 void B::show_a()
{
	cout<<"a="<<a<<"\n";
}
void D::mul()
{
   c=b*get_a();
//	c=b*show_a();
}
void D::display()
{
	//cout<<"a="<<show_a()<<"\n";
	cout<<"a="<<get_a()<<"\n";
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n";
}

int main()
{
	D d;	
	d.set_ab();
	d.mul();
	d.show_a();
	d.display();
	d.b=20;
	d.mul();
	d.display();
	return 0;
}
