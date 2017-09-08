#include <stdio.h>
#include <math.h>
#include<conio.h>
 int main() 
 {
        int x[100], y[100], xy[100], xsq[100], ysq[100],i, n, xsum=0, ysum=0, xysum=0, xsqsum=0, ysqsum=0;
        float coeff, num, deno;
        printf("Enter the value for n\n");
        scanf("%d", &n);
        printf("Enter x and y\n");
        for (i = 0; i < n; i++)
		 {
                scanf("%d%d", &x[i], &y[i]);
        }
        for (i = 0; i < n; i++)
		 {
                xy[i] = x[i] * y[i];
                xsq[i] = x[i] * x[i];
                ysq[i] = y[i] * y[i];
                xsum = xsum + x[i];
                ysum = ysum + y[i];
                xysum = xysum + xy[i];
                xsqsum = xsqsum + xsq[i];
                ysqsum = ysqsum + ysq[i];
        }
        num = 1.0 * ((n * xysum) - (xsum * ysum));
        deno = 1.0 * ((n * xsqsum - xsum * xsum)* (n * ysqsum - ysum * ysum));
        coeff = num / sqrt(deno);
        printf("Correlation Coefficient : %.4f\n", coeff);
        return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
