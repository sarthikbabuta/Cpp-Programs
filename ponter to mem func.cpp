#include<iostream>
using namespace std;
class data
{
	public:
		int func(float a)
		{
			return a;
		}
};
int (data::*fp)(float)=data::func;
int (data::*fp2)(float);
int main()
{
	data d;
	float x;
	cout<<"enetr float value";
	cin>>x;
	cout<<"integer value"<<(d.*fp)(x)<<endl;
	fp2=&data::func;
	cout<<"enetr float value";
	cin>>x;
	cout<<"integer value"<<(d.*fp2)(x)<<endl;
	return 0;
}
