#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float fun(float x){
	return ((x*x)-(4*x)-10);
}
int main(){
	int n=0;
	float x0, x1, x2, E;
	printf("Enter two initial point: ");
	scanf("%f%f", &x0, &x1);
	printf("STOPPING CRITERIA: ");
	scanf("%f", &E);
	printf("S.N.\tx0\tx1\n");
	do{
		x2 = x1-(((x1-x0)/(fun(x1)-fun(x0)))*fun(x1));
		x0 =x1;
		x1 =x2;	
		n++;
		printf("%d\t%f\t%f\n", n, x0, x1);
	} while(fabs((x1-x0)/x1) > E);
	printf("ROOT: %f", x2);
}
//OUTPUT
/*
Enter two initial point: 5
6
STOPPING CRITERIA: 0.0001
S.N.    x0      x1
1       6.000000        5.714286
2       5.714286        5.740741
3       5.740741        5.741661
4       5.741661        5.741657
ROOT: 5.741657
--------------------------------
Process exited after 3.002 seconds with return value 14
Press any key to continue . . .
*/
