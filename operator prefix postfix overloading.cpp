#include<iostream>
using namespace std;
class number
 {
 	private:
 	int x;
 	public:
 		number()
 		{
 		x=0;
		 }
		 number(int n)
		 {
		 	x=n;
		 }
		 number operator++() //pre
		 {
		 	x++;
		 	return number(x);
		 }
		 number operator++(int) //post
		 {
		 	return number(x++);
		 }
		 void showdata()
		 {
		 	cout<<x<<"\t";
		 }
};
int main()
{
	number n1(10),n2(200),n3,n4;
	n3=n1++;  //n1.operator++(dummy value)
	n4=++n2;   //n2.operator++(void)
	n3.showdata();
	n4.showdata();
	return 0;
}
