#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the degree of polynomial n:");
	scanf("%d",&n);
	float x[n], y[n];
	for(i=1;i<=n;i++)
	{
		printf("Enter x[%d] and f[%d]: ",i+1,i+1);
		scanf("%f%f",&x[i],&y[i]);
	 } 
	float sumxx = 0, sumx = 0, sumxy = 0,sumy = 0,b,a,w;
	for(i = 1;i<=n;i++)
	{
		sumxx = sumxx + x[i] * x[i];
		sumx = sumx + x[i];
		sumxy = sumxy + x[i]*y[i];
		sumy = sumy + y[i];
	 } 
 
	 b = (n * sumxy - sumx*sumy)/(n * sumxx-sumx * sumx);
	 a = (sumy -b* sumx) /n;
	 printf("y = %fx  %f",a,b);
	 printf("\nEnter w: ");
	 scanf("%f",&w);
	 printf("P = %f", a+(b*w));
}
