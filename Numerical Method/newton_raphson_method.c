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
	do{
		x0 = x1;
		count ++;
	   x1 = x0 - (function(x0)/function_deriv(x0));
    }while(fabs((x1-x0)/x1)>e);
    printf("The root is %f\n%d",x1,count);
}
float function(float x)
{
	return (3*x-cos(x)-1);
}
float function_deriv(float x)
{
	return(3 + sin(x));
}
