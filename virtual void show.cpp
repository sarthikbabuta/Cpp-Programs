#include<iostream>
using namespace std;
class base
{
	public:
	void print()
	{
	cout<<"print_base\n";
	}
	virtual void show()=0;
};
class derived:public base
{
	public:
		void print()
		{
				cout<<"\nprint_derived\n";
		}
			void show()
		{
				cout<<"\nshow_derived\n";
		}
};
int main()
{
	base *bptr;
	/*base object cannot be created*/
	derived D;
	bptr=&D;
	bptr->show();
	bptr->print();
	
}
