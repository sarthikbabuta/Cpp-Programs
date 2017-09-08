#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int num;
	vector<int>vect;
	cout<<"\nenter element of vector";
	for(int i=0;i<10;i++)
	{
		cin>>num;
		vect.push_back(num);
	}
	
	cout<<"\nenter element of vector";
	cout<<"\n\nelement are\n";
	for(int i=0;i<vect.size();i++)
	{
		cout<<vect[i]<<"\t";	
	}
	//vector<int>::iterator itr=vect.begin();
	///vect.insert(itr+4,25);
	
	cout<<"\n\n begin insertion\n";
	vect.insert(vect.begin()+5,35);
	for(int i=0;i<vect.size();i++)
	{
		cout<<vect[i]<<"\t";
	}
	
	
	cout<<"\n\nbegin deletion\n";
	vect.erase(vect.begin()+8);
	for(int i=0;i<vect.size();i++)
	{
		cout<<vect[i]<<"\t";
	}

	cout<<"\n\nerase end\n";
	vect.erase(vect.end()-5);
	for(int i=0;i<vect.size();i++)
	{
		cout<<vect[i]<<"\t";
	}
	
		cout<<"\n\ninsert end\n";
	vect.insert(vect.end()-5,10);
	for(int i=0;i<vect.size();i++)
	{
		cout<<vect[i]<<"\t";
	}
	
	
	vect.pop_back();
	cout<<"\n\npop back\n";
	for(int i=0;i<vect.size();i++)
	{
		cout<<vect[i]<<"\t";
	}
	
	cout<<"\n\nback";
	cout<<vect.back();
	
	cout<<"\n\nclear\n";
	vect.clear();
	for(int i=0;i<vect.size();i++)
	{
		cout<<vect[i]<<"\t";
	}
	

	cout<<"\n\nempty check";
	cout<<vect.empty();
}
