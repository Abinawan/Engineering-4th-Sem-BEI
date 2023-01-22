#include<conio.h>
#include<stdio.h>
int function(int n){
		if(n == 0){
			return 0;
		} else if(n == 1 || n==2){
			return 1;
		} else {
			return (function(n-1) + function(n-2));
		}	
	}

int main(){
	int n, f;
	printf("Fibonacci Series\nN: ");
	scanf("%d", &n);
		f = function(n-1);
		printf("%d\t", f);
}