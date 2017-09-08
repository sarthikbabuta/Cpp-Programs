 #include<iostream>
 using namespace std;
 class example
 {
 	int x;
 	int y;
 	public:
 		example()
 		{
 			
		 }
 		void operator - ()
 		{
 			x=-x;  //x=x*y;
 			y=-y; //y=x-y;
		 }
		 void display()
		 {
		 	cout<<"\n x="<<x<<"\ty="<<y<<endl;
		 }
		 example(int a,int b)
		 {
		 	x=a;
		 	y=b;
		 }
 };
 int main()
 {
 	example e1(11,12),e2;
 	-e1;
 	e1.display();
 	e2=example(15,-120);
 	-e2;
 	e2.display();
 	return 0;
 }
