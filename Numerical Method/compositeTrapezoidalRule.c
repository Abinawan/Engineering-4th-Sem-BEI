#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
	return (1 + x*x*x);
}
int main(){
	float I, h, a, b, sum = 0;
	int n, i;
	printf("Input lower and higher limit: ");
	scanf("%f%f", &a, &b);
	printf("Number of strip: ");
	scanf("%d", &n);
	h = (b - a)/n;
	for(i = 1; i<=n-1; i++){
		sum = sum + f(a+(i*h));
	}
	I = (h / 2) * ( f(a) + f(b) + (2 * sum));
	printf("The result is %f.", I);
}
// OUTPUT
/*
Input lower and higher limit: 1
2
Number of strip: 4
The result is 4.796875.
--------------------------------
Process exited after 1.81 seconds with return value 0
Press any key to continue . . .
*/
