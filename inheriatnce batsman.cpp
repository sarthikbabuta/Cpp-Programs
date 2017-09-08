#include<iostream>
using namespace std;
class person
{
	protected:
		char name[100];
		int age;
		public:
			void get_person()
			{
				cout<<"enter the name"<<"\n";
				cin>>name;
				cout<<"enter the age"<<"\n";
				cin>>age;
			}
			void put_person()
			{
				cout<<name<<"\n";
				cout<<age<<"\n";
			}
};
class batsman:protected person
{
    protected:
		int total_runs;
		int odi_played;
		int no_of_century;
		public:
			void get_batsman()
			{
				cout<<"enter the total runs"<<"\n";
				cin>>total_runs;
				cout<<"enter the odi played"<<"\n";
				cin>>odi_played;
				cout<<"enter the no of century"<<"\n";
				cin>>no_of_century;	
			}
			void put_batsman()
			{
				cout<<total_runs<<"\n";
				cout<<odi_played<<"\n";
				cout<<no_of_century<<"\n";	
			}
};
class runrate:protected batsman 
{
	protected:
		int strike_rate;
		public:
			void get_runrate()
			{
				get_person();
				get_batsman();
				cout<<"enter the strike rate"<<"\n";
				cin>>strike_rate;
			}
			void  put_runrate()
			{
				put_person();
				put_batsman();
				cout<<strike_rate<<"\n";
			}
};
int main()
{
	runrate r;
    r.get_runrate();
    r.put_runrate();
	return 0;
}
