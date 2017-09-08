#include<iostream>
using namespace std;
const int size=5;
class student
{
	int rollno;
	int marks[size];
	public:
		void getdata();
		void totmarks();
};
void student :: getdata()
{
	cout<<"enter rollno"<<endl;
	cin>>rollno;
	for(int i=0;i<size;i++)
	{
		cout<<"enter marks"<<(i+1);
		cin>>marks[i];
	}
}
void student :: totmarks()
{
	int total=0;
	for(int i=0;i<size;i++)
	{
		total+=marks[i];
	}
	cout<<"total marks"<<total<<endl;
}
int main()
{
	student s1;
	s1.getdata();
	s1.totmarks();
	return 0;
}
