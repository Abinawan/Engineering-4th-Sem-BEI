#include<conio.h>
#include<stdio.h>
int n, sum=0;
int function(int num){
	if(num){
		sum=sum*10+(num%10);
		function(num/10);
	}
	return sum;
}
int main(){
	printf("Reverse Number\nN: ");
	scanf("%d", &n);
	printf("%d\t", function(n));
}