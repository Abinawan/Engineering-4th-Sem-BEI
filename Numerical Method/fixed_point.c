#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
float function(float);
float function_g(float);
int main()
{
    float x0,e,x1;
    int n,step=1;
    printf("Enter stopping criteria: ");
    scanf("%f",&e);
    printf("Enter  initial point: ");
    scanf("%f",&x0);
    printf("Enter  maximum iteration: ");
    scanf("%f",&n);
    do{
        x1 = function_g(x0);
        step = step +1;
        if (step > n)
        {
            printf("Not convergent");
            exit(0);
        }
       x0 = x1;
    }while(fabs(function(x1))>e);
    printf("The root is %f\n%d",x1,step);
}
float function(float x)
{
    return (sin(x)+(3*x)-2);
}
float function_g(float x)
{
    return((2 - sin(x))/3);
}
