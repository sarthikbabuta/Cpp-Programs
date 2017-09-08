#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	fstream file("a.txt");
	if(!file.is_open())
	{
		cout<<"error";
	}
	else
	{
		cout<<file.tellp();
		file<<"hello how are you";
	cout<<file.tellp();
	file.seekp(5);
	file<<"writing";
	cout<<file.tellp()<<endl;
	file.close();
	}

}
