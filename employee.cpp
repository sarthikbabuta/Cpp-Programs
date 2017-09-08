#include<iostream>
using namespace std;
class employee
{
	int age;
	char name[100];
	public:
		void getdata()
		{
			int n,i;
			
			cout<<"enter employee name";
			cin>>name;
			cout<<"enter age";
			cin>>age;
		}
		void putdata()
		{
			cout<<"Employ Name:"<<name<<"Age"<<age;
		}
};
int main()
    {
    	int n,i;
    	employee s;
    	cout<<"Enter the no employee";
    	cin>>n;
    	for(i=0;i<n;i++)
        {
        	s.getdata();
		}
		for(i=0;i<n;i++)
		{
			s.putdata();
		}
    	
	}

