#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("a.txt");
	if(!file.is_open())
	{
		cout<<"error";
	}
	else
	{
		cout<<"reading from file"<<endl;
		string line;
		while(file.good())
	  {
	  	
		getline(file,line);
		cout<<line;
     	 
      } 
    }

}
