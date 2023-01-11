//doubly linked  list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *newnode;
struct node *head;
struct node *ptr;
void insert();
int insert_begin(int);
int insert_end(int);
int insert_pos(int);
void deletes();
void delete_begin();
void delete_end();
void delete_pos();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("Enter your choice:\n ");
        printf("1.Insert\t2.Delete\t3.Display\t4.Exit\n-->");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                deletes();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Please input validate choice\n");
                break;
        }
    }
}
void insert()
{
    int choice;
    int value;
    printf("Enter the value that you want to insert: ");
    scanf("%d",&value);
    printf("What do you want to do?\n  0.Enter at begining    1.Enter at end    2.Enter at certain position\n-->");
    scanf("%d",&choice);
    if (choice == 0)
    {
        insert_begin(value);
    }
    else if (choice == 1)
    {
        insert_end(value);
    }
    else if (choice == 2)
    {
        insert_pos(value);
    }
    else
    {
        printf("Please input validate choice\n");
        return;
    }
}
void deletes()
{
    int choice;
    printf("\nChoose your choice:  0.Delete at begining    1.Delete at end    2.Delete at position\n-->");
    scanf("%d",&choice);
    if (choice == 0)
    {
        delete_begin();
    }
    else if (choice == 1)
    {
        delete_end();
    }
    else if (choice == 2)
    {
        delete_pos();
    }
    else
    {
        printf("Please input validate choice\n");
    }
}
int insert_begin(int value)
{
    newnode =  (struct node *)malloc(sizeof(struct node));
    newnode->info = value;
    newnode->prev = NULL;
    if (head == NULL)
   {
      head = newnode;
      newnode->next = NULL;
    }
   else
   {
        newnode->next = head;
        head = newnode;
    }

}
int insert_end(int value)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = value;
    newnode -> prev = NULL;
    if (head == NULL)
    {
        head = newnode;
        newnode->next = NULL;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->next = NULL;
        newnode->prev = ptr;
    }
}

int insert_pos(int value)
{
    int position,i;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d",&position);
    newnode -> info = value;
    newnode -> prev = NULL;
    ptr = head;
    if (position == 0)
    {
        newnode -> next = head;
        head = newnode;
    }
    else
    {
        for (i = 0;i < position-1; i++)
        {
            ptr = ptr -> next ;
            if(ptr == NULL)
            {
                printf("\nPosition not found!Please enter valid position\n");
                return 0;
            }
         }
        newnode -> next = ptr ->next;
        newnode -> prev = ptr;
        ptr -> next -> prev = newnode;
        ptr -> next = newnode;
        return 0;
    }
}
void delete_begin()
{
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        ptr = head;
        head = head -> next;
        head -> prev = NULL;
        free(ptr);
    }
}
void delete_end()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else if(head -> next == NULL)
    {
        ptr = head;
        head = NULL;
        printf("The deleted item is %d\n",head->info);
        free(ptr);
    }
    else
    {
        ptr = head;
        while(ptr -> next != NULL)
        {
            ptr = ptr -> next;
        }
        ptr -> prev -> next = NULL;
        printf("The deleted item is: %d",ptr -> info);
        free(ptr);
    }
}
void delete_pos()
{
    int position,i;
    printf("Enter the position: ");
    scanf("%d",&position);
    ptr = head;
    if (head == NULL)
    {
        printf("The list is empty");
    }
    else if (position == 0)
    {
        printf("The deleted element is %d\n",ptr->info);
        head = ptr -> next;
        head -> prev = NULL;
        free(ptr);
    }
    else
    {
        for (i = 0;i < position; i++)
        {
            ptr = ptr -> next ;
            if(ptr == NULL)
            {
                printf("Position not found!Please enter valid position\n");
                return;
            }
         }
        ptr -> prev -> next = ptr -> next;
        ptr -> next -> prev = ptr -> prev;
        printf("The deleted item is %d\n",ptr->info);
        free(ptr);
    }
}
void display()
{
    ptr = head;
    printf("The item are:\t");
    while (ptr != NULL)
    {
        printf("%d\t",ptr->info);
        ptr = ptr -> next;
    }
    printf("\n");
}
