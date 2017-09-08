#include<iostream>
using namespace std;
class matrix
{
	int m[3];
	public:
		void read(void)
		{
			cout<<"enter the element";
			int i,j;
			for(i=0;i<3;i++)
			{
			cin>>m[i];
		    }
		}
		void display(void)
		{
			int i,j;
			for(i=0;i<3;i++)
			{
			cout<<m[i]<<"\t";
		    }
		}
friend matrix large(matrix m1);	
};
matrix large(matrix m1)
{
	int i,j;
	large=m1[0];
	small=m1[0];
	for(i=0;i<3;i++)
	{
		if(m1[i]>large)
		{
			large=m1[i];
			int loc=i;
		}
		if(m1[i]<small)
		{
			small=m1[i];
			int pos=i;
		}
	}
	void interchange();	
}
void interchange(matrix temp)
{
	temp=large[loc];
	large[loc]=small[pos];
	small[pos]=temp;	
}
int main()
{
	matrix mat1,mat2;
	mat1.read();
	cout<<"\n input matrix";
	mat1.display();
	mat2=transpose(mat1);
	cout<<"\n output matrix";
	mat2.display();
	return 0;
	
	
}
