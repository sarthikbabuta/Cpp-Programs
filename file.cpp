#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("a.txt",ios::in|ios::out|ios::trunc);
	if(!file.is_open())
	{
		cout<<"error";
	}
	else
	{
		cout<<"succesful";
	}
	file.close();
}
