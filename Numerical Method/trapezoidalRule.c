#include<stdio.h>
#include<conio.h>
float f(float x){
	return (1 + x*x*x);
}
int main(){
	float I, h;
	int a, b;
	printf("Input lower and higher limit: ");
	scanf("%d%d", &a, &b);
	h = b - a;
	I = h / 2 * ( f(a) + f(b));
	printf("The result is %f.", I);
}
// OUTPUT
/*
Input lower and higher limit: 1
2
The result is 5.500000.
--------------------------------
Process exited after 0.9771 seconds with return value 0
Press any key to continue . . .
*/
