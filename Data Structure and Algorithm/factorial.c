#include<conio.h>
#include<stdio.h>
int function(int n){
	if(n == 0 || n == 1){
		return 1;
	} else {
		return (n*function(n-1));
	}
}
int main(){
	int n, f;
	printf("Factorial\nN: ");
	scanf("%d", &n);
	f = function(n);
	printf("%d", f);
}