#include<stdio.h>
int sum(int n){
	if(n==0)
		return n;
	else
		return(n+sum(n-1));
}
int main(){
	int num;
	printf("N\n");
	scanf("%d",&num);
	printf("SUM = %d\n ", sum(num));
	return 0;
}