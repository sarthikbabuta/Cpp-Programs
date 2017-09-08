/*write a prog that has class student to store deatail of student in class derive the another class toppers
from the student that store the records of top 3 student of class.*/
#include<iostream>
using namespace std;
const int size=5;
class student
{
	public:
		int temp;
		string name[100];
		int marks[100];
			void get()
			{
				for(int i=0;i<size;i++)
				{
					cout<<"enter the name";
					cin>>name[i];
					cout<<"enter the marks";
					cin>>marks[i];
				}
			}
			void sort()
			{
				for(int i=0;i<size;i++)
				{
					for(int j=0;j<size-1;j++)
					{
						if(marks[j]<marks[j+1])
						{
							temp=marks[j];
							marks[j]=marks[j+1];
							marks[j+1]=temp;
						}
					}
				}
			}
		
			
};
class topper:public student
{
	public:
			void show()
			{
				for(int i=0;i<3;i++)
				{
					cout<<name[i]<<"\n"<<marks[i]<<"\n";
				}
			}
		
};
int main()
{
topper t;
t.get();
t.sort();
t.show();
}

