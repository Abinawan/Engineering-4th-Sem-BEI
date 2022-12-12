// a. x^2 - 4x - 10 = 0
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fun(float x){
	return ((x*x) - (4*x) - 10);
}
int main(){
	int a = 0;
	float x0, x1, x2, x, e, f0, f1=0, f2=0;
	printf("E: ");
	scanf("%f", &e);
	while((f1 * f2) >= 0){
		printf("Initial Guess x1 and x2: ");
		scanf("%f%f", &x1, &x2);
		f1 = fun(x1);
		f2 = fun(x2);
	}
	printf("SN\tx1\t\tx2\t\tx0\t\tf0\n");
	do{
		a++;
		x0 = (((x1 * f2) - (x2 * f1) ) / (f2 - f1));
		f0 = fun(x0);
		if((f1 * f0) > 0){
			x1=x0;
			f1 = f0;
		} else {
			x2 = x0;
			f2=f0;
		}	
		printf("%d\t%f\t%f\t%f\t%f\n", a, x1, x2, x0, f0);
	} while (fabs(f0) > e);
		printf("\nROOT: %f\n", x0);
		printf("No. of iterations: %d", a);
}
/*
// OUTPUT
E: 0.0001
Initial Guess x1 and x2: 5
6
SN      x1              x2              x0              f0
1       5.714286        6.000000        5.714286        -0.204082
2       5.740741        6.000000        5.740741        -0.006859
3       5.741627        6.000000        5.741627        -0.000229
4       5.741656        6.000000        5.741656        -0.000008

ROOT: 5.741656
No. of iterations: 4
--------------------------------
Process exited after 4.205 seconds with return value 20
Press any key to continue . . .
*/
