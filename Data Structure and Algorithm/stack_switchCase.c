#include<stdio.h>
#include<windows.h>
#define SIZE 5
int top = -1;
int stack[SIZE];
int isEmpty(){
	if(top == -1){
		printf("STACK IS EMPTY!\n");
		return 1;
	} else {
		return 0;
	}
}
int isFull(){
	if(top == SIZE - 1){
		printf("STACK OVERFLOW!\n");
		return 1;
	} else {
		top++;
		return 0;
	}
}
int push(int data){
	stack[top] = data;
	printf("\nDATA INSERTED! [%d/%d]\n", top+1, SIZE);
	return 0;
}
int pop(){
	int data;
	data = stack[top];
	top--;
	printf("\nRemoved %d from the stack.\n", data);
	return 0;
}
int menu(){
	int opt;
	sleep(3);
	system("cls");
	printf("\nChoose:?\n1- ADD\n2. REMOVE\n3. PEEK\n4. DISPLAY\n->");
	scanf("%d", &opt);
	switch(opt){
		case 1:{
			if(isFull() == 0){
				int data;
				printf("Input data: ");
				scanf("%d", &data);
				push(data);
			}
		} 
		break;
		case 2:{
			if(isEmpty() == 0){
				pop();
			}
		} 
		break;
		case 3:{
			printf("TOP STACK POSITION: %d | VALUE: %d", top, stack[top]);
		} 
		break;
		case 4:{
			if(!isEmpty()){
				int i;
				printf("DATA(s): [");
				for(i=0;i<=top;i++){
					printf(" %d", stack[i]);
				}
				printf("]");
			}
		} 
		break;
		default:{
			return 1;
		}	
	}
		
	return 0;
}
int main(){
	while(menu() != 1); 
	printf("\nINVALID OPTION! EXITING PROGRAM!");
			
}
