#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("a.txt");
	if(!file.is_open())
	{
		cout<<"error";
	}
	else
	{
		file<<"I am appending"<<endl;
		file<<"My file";
		file.close();
		cout<<"succesful";
	}

}
