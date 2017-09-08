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
		cout<<file.tellg()<<endl;
		string line;
	file.seekg(2);
	getline(file,line);
	cout<<line;
    }

}
