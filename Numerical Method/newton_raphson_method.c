#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
float function(float);
float function_deriv(float);
int main()
{
	float x0,x1,e;
	int count =0;
	printf("Enter stopping criteria: ");
	scanf("%f",&e);
	printf("Enter  initial point: ");
	scanf("%f",&x1);
	printf("S.N.\tx0\t\tx1\n");
	do{
		x0 = x1;
		count ++;
	   x1 = x0 - (function(x0)/function_deriv(x0));
	   printf("%d\t%f\t%f\n", count, x0, x1);
    }while(fabs((x1-x0)/x1)>e);
    printf("The root is %f\nTotal iteration: %d",x1,count);
}
float function(float x)
{
	return (3*x-cos(x)-1);
}
float function_deriv(float x)
{
	return(3 + sin(x));
}

//OUTPUT
/*
Enter stopping criteria: 0.0001
Enter  initial point: 5
S.N.    x0              x1
1       5.000000        -1.720151
2       -1.720151       1.269037
3       1.269037        0.634390
4       0.634390        0.607186
5       0.607186        0.607102
6       0.607102        0.607102
The root is 0.607102
Total iteration: 6
--------------------------------
Process exited after 2.776 seconds with return value 0
Press any key to continue . . .
*/
