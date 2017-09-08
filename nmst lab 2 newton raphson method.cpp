#include<stdio.h>
#define f(x) (x*x*x*x*x-50)
#define f1(x) (5*x*x*x*x)
int main()
{
	float a,b,x,i,n,count=02;
	printf("enter the value of a and b");
	scanf("%f%f",&a,&b);
    printf("enter the value of iteration");
	scanf("%f",&n);
	while(f(a)*f(b)>0)
	{
		a++;
		b++;
	}
	x=(float)(a+b)/2;
	while(count<n)
	{
		if(f(a)*f(x)<0)
		{
			b=x;

		}
		else
		{
			a=x;
		}
		
		x=x-(f(x)/f1(x));
		count++;
	}
	printf("%f",x);

}
