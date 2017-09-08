#include<iostream>
using namespace std;
class A
{
	int m,n;
	public:
		A()
		{
			m=0;
			n=0;
		}
		A(int a)
		{
			m=n=a;
		}
		A(int a,int b)
		{
			m=a;
			n=b;
		}
		void display(void)
		{
			cout<<"m="<<m<<"n="<<n<<endl;
		}
};
int main()
{
	A a1;
	A a2(20);
	A a3(50,50);
	a1.display();
	a2.display();
	a3.display();
	return 0;
}
