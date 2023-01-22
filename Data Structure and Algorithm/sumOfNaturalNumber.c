#include<conio.h>
#include<stdio.h>
int function(int n){
	if(n == 1){
		return 1;
	} else {
		return (n + function(n-1));
	}
	}

int main(){
	int n, f=0;
	printf("Sum of natural numbers\nN: ");
	scanf("%d", &n);
	f = function(n);
	printf("%d\t", f);
}