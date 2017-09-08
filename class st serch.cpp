#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	        char ch[]={"hello how are you are"},ch1[100];
			cout<<"enter the string1";
			cin>>ch1;
			int flag=0,count=0;
			int i=0,j=0,k=0;
			while(ch[i]!='\0')
			{
				j=0;
				k=i;
				while(ch[k]==ch1[j])
				{
					k++;
					j++;
				}
				if(ch1[j]=='\0')
				{
					flag=1;
					count++;
				}
				i++;
			}
				if(flag==1)
		{
			cout<<count;
		}
		else 
		{
			cout<<"not Found";
		}
}
		
