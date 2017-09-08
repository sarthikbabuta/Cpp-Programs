#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
	protected:
		char cname[100];
		public:
			void get_person()
			{
				cout<<"enter the roll no";
				cin>>roll_no;
				cout<<"enter the course name";
				cin>>cname;
			}
			void put_person()
			{
				cout<<roll_no<<"\n";
				cout<<cname<<"\n";
			}
};
class result:protected student
{
	private:
		int marks[100];
		int total_marks=0;
		public:
			void get_result()
			{
				get_person();
				cout<<"enter the marks"<<"\n";
				for(int i=0;i<3;i++)
				{
					cin>>marks[i];
					total_marks+=marks[i];
				}
			}
			void put_result()
			{
				put_person();
				cout<<total_marks;	
			}
};
int main()
{
	result r;
	r.get_result();
	r.put_result();
	return 0;
}
