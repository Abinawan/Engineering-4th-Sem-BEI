//composite simpson rule
#include<stdio.h>
#include<math.h>
float function(float);
int main()
{
	float h,a,b,integrate=0,final_integrate;
	int n,i;
	printf("Enter lower bound and upper bound: ");
	scanf("%f%f",&a,&b);
	printf("Enter the number of strip: ");
	scanf("%d",&n);
	h = (b - a)/n;
	final_integrate = function(a)+ function(b);
	for(i = 1 ; i<= n-1;i++)
	{
		if (i %2 == 0)
		{
			integrate = integrate + 2* function((a+i*h));
		}
		else 
		{
			integrate = integrate + 4* function((a+i*h));
		}
	}
	final_integrate = final_integrate + integrate;
	final_integrate = h/3*final_integrate;
	printf("I = %f",final_integrate);
	
}
float function(float x)
{
	return(1+pow(x,3));
}
