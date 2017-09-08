#include<iostream>
using namespace std;
class student
{
	protected:
			int roll_no;
		public:
			void get_number(int a)
			{
			roll_no=a;
			}
			void put_number()
			{
				cout<<"roll no"<<roll_no<<"\n";
			}
};
class test:public student
{
         protected:
		float part1,part2;
		public:
			void get_marks(float x,float y)
			{
				part1=x;
				part2=y;
			}
			void put_result()
			{
			
				cout<<"marks obtained"<<"\n"<<"part1="<<part1<<"part2="<<part2<<"\n";	
			}
};
class sports
{
         protected:
		float score;
		public:
			void get_score(float s)
			{
				score=s;
			}
			void put_score()
			{
			
				cout<<"sports wt:"<<score<<"\n\n";	
			}
};
class result:public test,public sports
{
		float total;
		public:
			void display(void);
};
void result::display(void)
{
	total=part1+part2+score;
	put_number();                              //sports::display(); agar upar vali class ko display karna hai
	put_result();                                                   //then scope will use
	put_score();
	cout<<"total score="<<total<<"\n";
}
int main()
{
	result r;
	r.get_number(1239);                      
	r.get_marks(27.5,33.0);
	r.get_score(6.0);
	r.display();                                //r.sports::display(); gar upar vali class ko display karna hai
	return 0;                                     //then scope will use
}
