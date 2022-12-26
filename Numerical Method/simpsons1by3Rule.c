#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
	return (1 + x*x*x);
}
int main(){
	float I, h, a, b, sum = 0;
	int i;
	printf("Input lower and higher limit: ");
	scanf("%f%f", &a, &b);
	h = (b - a)/2;
	I = (h / 3) * ( f(a) + 4 * f(a+b) / 2 +f(b));
	printf("The result is %f.", I);
}
// OUTPUT
/*
Input lower and higher limit: 1
2
The result is 11.166667.
--------------------------------
Process exited after 1.839 seconds with return value 0
Press any key to continue . . .
*/
