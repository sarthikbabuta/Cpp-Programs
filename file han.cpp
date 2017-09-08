#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("anil.txt");
	if(!file.is_open())
	{
		cout<<"error";
	}
	else
	{
		cout<<"reading from file"<<endl;
		string line;
		getline(file,line);
		cout<<line;
	}
	
}
