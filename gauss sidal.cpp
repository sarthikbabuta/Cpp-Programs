#include <stdio.h> 
int main() 
{ 
float eq[3][4];
int i;
float x ,y , z; 
x = 1; y = 1; z = 2; //initial guess
eq[0][0] = 7/4.0; 
eq[0][1] = 0; 
eq[0][2] = 1/4.0; 
eq[0][3]= -1/4.0;
eq[1][0] = 21/8.0; 
eq[1][1] = 4/8.0;
eq[1][2] = 0;
eq[1][3]= 1/8.0;
eq[2][0] = 15/5.0;
eq[2][1] = 2/5.0;
eq[2][2] = -1/5.0;
eq[2][3]= 0;
for (i = 0;i <9; i++) 
{
  x = eq[0][0] + eq[0][2] * y + eq[0][3] * z;
  y = eq[1][0] + eq[1][1] * x + eq[1][3] * z;
  z = eq[2][0] + eq[2][1] * x + eq[2][2] * y;
  printf("Output: \n%f %f %f\n", x, y, z); 
} 
 
return 0; 
}
