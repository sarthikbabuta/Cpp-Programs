#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num;
	vector<int>vect;
	cout<<"enter content of vector";
	for(int i=0;i<10;i++)
	{
		cin>>num;
		vect.push_back(num);
		
	}
	sort(vect.begin(),vect.end());
	reverse(vect.begin(),vect.end());
	cout<<"content of sorted vector in reverse";
	vector<int>::iterator itr;
	for(itr=vect.begin();itr!=vect.end();itr++)
	{
		cout<<*itr;
	}

}
