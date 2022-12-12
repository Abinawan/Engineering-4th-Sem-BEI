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
		x0 = (x1 + x2) /2;
		f0 = fun(x0);
		if((f1 * f0) > 0){
			x1=x0;
		} else {
			x2 = x0;
		}	
		printf("%d\t%f\t%f\t%f\t%f\n", a, x1, x2, x0, f0);
	} while (fabs((x2 - x1) / x2) > e);
		printf("\nROOT: %f\n", x0);
		printf("No. of iterations: %d", a);
}
/*
// OUTPUT

E: 0.0001
Initial Guess x1 and x2: 5
6
SN      x1              x2              x0              f0
1       5.500000        6.000000        5.500000        -1.750000
2       5.500000        5.750000        5.750000        0.062500
3       5.625000        5.750000        5.625000        -0.859375
4       5.687500        5.750000        5.687500        -0.402344
5       5.718750        5.750000        5.718750        -0.170898
6       5.734375        5.750000        5.734375        -0.054443
7       5.734375        5.742188        5.742188        0.003967
8       5.738281        5.742188        5.738281        -0.025253
9       5.740234        5.742188        5.740234        -0.010647
10      5.741211        5.742188        5.741211        -0.003342
11      5.741211        5.741699        5.741699        0.000313

ROOT: 5.741699
No. of iterations: 11
--------------------------------
Process exited after 4.679 seconds with return value 21
Press any key to continue . . .
*/
