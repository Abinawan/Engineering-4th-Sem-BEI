//circular queue
#include<stdio.h>
#include<stdlib.h>
#define size 50
int front = 0;
int rear = -1;
int queue[size];
void insertion();
void deletes();
void displays();
int main()
{
    int choice;
    
    while(1)
    {
    printf("\nEnter your choice: ");
    printf("0.Insert   1.Delete   2.Display    3.Exit\n");
    scanf("%d",&choice);
	
    switch(choice)
    {
        case 0:
            insertion();
            break;
        case 1:
            deletes();
            break;
        case 2:
            displays();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Please input validate choice");
            break;

    }
    }
}
void insertion()
{
    if(rear == size -1)
    {
        printf("The queue is full");
    }
    else
    {
        int value;
        printf("Enter the value: ");
        scanf("%d",&value);
        rear = (rear + 1) % size;
        queue[rear] = value;
    }
}
void deletes()
{
    if(front > rear)
    {
        printf("The queue is empty");
    }
    else
    {
        printf("The deleted element is %d",queue[front]);
        front = (front + 1) % size;
    }
}

void displays()
{
    if(front > rear)
    {
        printf("The queue is empty");
    }
    else
    {
    	int i;
        printf("The elemet in queue are:\n");
        for( i = front; i != rear; i = (i+1) % size)
        {
            printf("%d",queue[i]);
        }
    }
}
