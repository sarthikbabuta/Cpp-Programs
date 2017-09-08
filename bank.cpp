#include<iostream>
using namespace std;
class bank
    {
    	int ano,bal,d,w;
    	char ta[10],na[100];
    	public:
    	void getdata()
    	    {
    	    	cout<<"Enter the Name:";
    	    	cin>>na;
    	    	cout<<"Enter the acc no:";
    	    	cin>>ano;
    	        cout<<"Enter the account type:";
				cin>>ta;
				cout<<"Enter the balance:";
				cin>>bal;	
				
			}
		void deposit()
		    {
		    	cout<<"Enter the amount:";
		    	cin>>d;
		    	bal=bal+d;
			}	
		void withdraw()
		    {
		    cout<<"Your Bal:"<<bal;
			cout<<"ENter the amount:";
			cin>>w;
			bal=bal-w;
	     	}	
	    
		void display()
	     	{
	     		cout<<"Name:"<<na;
	     		cout<<"Bal:"<<bal;
	        }		
	};
	int main()
 {
	    	int n;
	    	bank b;
	    	b.getdata();
	    	b.deposit();
	    	b.withdraw();
	    	b.display();
		
	}
