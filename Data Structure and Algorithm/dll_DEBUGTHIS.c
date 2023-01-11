#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
	struct node *prev;
};
struct node *newnode;
struct node *head;
struct node *ptr;
void add_beg();
void add_end();
void add_spec();
void del_beg();
void del_end();
void del_spec();
void display();
int main(){
	printf("Choose an option:\n1. Add at beginning \n 2. Add at end \n 3. Add at specific position \n 4. Delete at beginning \n 5. Delete at end \n 6. Delete at specific position \n 7. Display \n 8. Exit \n");
	int choice;
	scanf("%d",&choice);
	while(1){
	    printf("->");
		switch(choice){
			case 1: 
			add_beg();
			break;
			case 2: add_end();
			break;
			case 3: add_spec();
			break;
			case 4: del_beg();
			break;
			case 5: del_end();
			break;
			case 6: del_spec();
			break;
			case 7: display();
			break;
			case 8: 
			exit(1);
			break;
			default: printf("Invalid choice");
		}
	}
}
void add_beg(){
	int value;
	newnode =  (struct node *)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&value);
    newnode->info = value;
    newnode->prev = NULL;  newnode->next = NULL;
    
    if (head == NULL)
   {
      head = newnode;
      main();
    }
   else
   {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return;
    }
//	newnode = (struct node *)malloc(sizeof(struct node));
//	printf("Enter the data: ");
//	scanf("%d",&newnode->info);
//	newnode->next=NULL;
//	newnode->prev=NULL;
//		newnode->next = head;
//		head->prev = newnode;
//		head = newnode;
//		return;
	
}
void add_end(){
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d", &newnode->info);
	newnode->prev = NULL;
	newnode->next = NULL;
	if(head == NULL){
		head = newnode;
	} else {
		ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = newnode;
		newnode->prev = ptr;
	}
}
void add_spec(){
	int pos, i;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d", &newnode->info);
	newnode->prev = NULL;
	newnode->next = NULL;
	printf("Enter the position: ");
	scanf("%d", &pos);
	ptr = head;
	for(i = 0; i<pos-1; i++){
		ptr = ptr->next;
		if(ptr == NULL){
			printf("Position not found!\n");
		}
		newnode->next = ptr->next;
		newnode->prev = ptr;
		ptr->next->prev = newnode;
		ptr ->next = newnode;
	}
}
void del_beg(){ 
	 if(head == NULL){ 
		 printf("List is empty!"); 
	 } else { 
		 ptr = head; 
		 head = head->next; 
		 head->prev=NULL;
		 free(ptr); 
	 } 
} 
void del_end(){ 
	 if(head == NULL){
	 	printf("List is empty!"); 
	 } else if(head->next == NULL){ 
		 ptr = head;
		 head = NULL; 
		 printf("DELETED: %d", head->info); 
		 free(ptr); 
	 } else { 
		 ptr = head; 
		 while(ptr -> next != NULL){ 
			 ptr = ptr -> next; 
		 } 
		 ptr->prev->next = NULL;
		 printf("DELETED: %d", ptr->info); 
		 free(ptr); 
	 } 
} 
void del_spec(){ 
	 if(head == NULL){ 
		 printf("List is empty!"); 
		 return; 
	 } else { 
		 int pos, i; 
		 printf("Enter the position where you want to delete the node: "); 
		 scanf("%d", &pos); 
		 if(pos == 0){
		 	ptr = head;
		 	head = head->next;
		 	head->prev=NULL;
		 	//printf("DELETED ELEMENT: ", ptr->info);
		 	free(ptr);
		 } else {
		 	ptr = head;
		 	for(i=0;i<pos;i++){
		 		ptr = ptr -> next;
		 		if(ptr == NULL){
		 			printf("Position not found!");
				 }
			 }
			 ptr->prev->next = ptr->next;
			 ptr->next->prev = ptr->prev;
			 free(ptr);
		 }
	 } 
} 
void display(){ 
struct node *ptr;
	 ptr = head; 
	 printf("List: [\t"); 
	 while(ptr != NULL){ 
	 printf("%d\t", ptr->info); 
	 ptr = ptr -> next; 
	 } 
	 printf("]"); 
}















