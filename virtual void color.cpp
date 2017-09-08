#include<iostream>
using namespace std;
class fruit
{
	public:
		virtual void color()=0;
		
};
class mangoe:public fruit
{
	public:
		void color()
		{
			cout<<"yellow\n";
		}
};
class orange:public fruit
{
	public:
		void color()
		{
			cout<<"orange\n";
		}
};
int main()
{
	fruit *ptr1,*ptr2;
	mangoe m;
	orange o;
	ptr1=&m;
	ptr2=&o;
	ptr1->color();
	ptr2->color();
}
