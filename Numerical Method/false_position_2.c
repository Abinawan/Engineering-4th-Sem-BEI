#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float functions(float);
int main()
{
	float x0,fx0, fx1,fx2,x1,x2,e;
	int count=0;
	printf("Input decimal place: ");
	scanf("%f",&e);
	do{
	printf("Input intial guess of x1 and x2:");
	scanf("%f%f",&x1,&x2);
	fx1 = functions(x1);
	fx2 = functions(x2);
	if(fx1*fx2>0)
	{
		printf("Choose another guess\n");
	}
     }while(fx1*fx2>0);
	printf("x1\t\tx2\t\tx0\t\tfx0\n"); 
	do{
	count++;	
	x0 = ((x1*fx2)-(x2*fx1))/(fx2-fx1);
	fx0 = functions(x0);
	printf("%f\t%f\t%f\t%f\n",x1,x2,x0,fx0);
	if(fx1*fx0<0)
	{
		x2 = x0;
		fx2 = fx0;
	}
	else
	{
		x1 = x0;
		fx1 = fx0;
	}
}while(fabs(fx0)>e);
	printf("\nThe root is: %f\n%d ",x0,count);
}
float functions(float x)
{
	return(4*sin(x)-exp(x));
}
