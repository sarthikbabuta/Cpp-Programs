//returning object from function
#include<iostream>
using namespace std;
class matrix
{
	int m[3][3];
	public:
		void read(void)
		{
			cout<<"enter the element";
			int i,j;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>m[i][j];
				}
			}
		}
		void display(void)
		{
			int i,j;
			for(i=0;i<3;i++)
			{
				cout<<"\n";
				for(j=0;j<3;j++)
				{
					cout<<m[i][j]<<"\t";
				}
			}
		}
friend int  transpose(matrix);	
};
int transpose(matrix m1)
{
	matrix m2;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m1.m[i][j]=m1.m[j][i];
		}
	}
	return (m1);
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
