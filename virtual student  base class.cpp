#include<iostream>
using namespace std;
class student
{
	protected:
		int rollno;
		public:
	virtual	void input_student()
		{
			cout<<"enter the rollno\n";
			cin>>rollno;
		}
		virtual			void put_student()
		{
			cout<<"roll\n";
			cout<<rollno;
		}
		
		
};
class test:virtual public student
{
	protected:
		int marks1,marks2;
		public:
		virtual		void input_test()
		{
			cout<<"enter the marks1 and marks2\n";
			cin>>marks1>>marks2;
		}
			virtual		void put_test()
		{
			cout<<"marks are\n";
			cout<<marks1<<marks2;
		}	
};
class score:virtual public student
{
	protected:
		int score;
		public:
		virtual		void input_score()
		{
			cout<<"enter the score\n";
			cin>>score;
		}
			void put_score()
		{
			cout<<"score are\n";
			cout<<score;
		}	
};
class result:public test,public score
{
	protected:
		int total=0;
		public:
			virtual		void display()
			{
					input_student();
					input_test();
					input_score();
		total=marks1+marks2+score;
	
		put_student();
		 put_test();
		put_score();
		cout<<"total="<<total<<"\n";
     	}
			
};
int main()
{
	result r;
	r.display();
}
