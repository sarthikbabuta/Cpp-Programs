#include<iostream>
using namespace std;
template<class T1,class T2>
class test
{
	T1 a;
	T2 b;
	public:
		test(T1 x,T2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a<<" and "<<b<<"\n";
		}
};
int main()
{
	cout<<"with float and int data types \ntest1: ";
	test<float,int>test1(1.23,123);
	test1.show();
	cout<<"int and char data types \ntest2 ";
	test<int,char>test2(100,'w');
	test2.show();
}
