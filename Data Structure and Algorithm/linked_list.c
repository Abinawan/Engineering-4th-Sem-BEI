//linked  list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *newnode;
struct node *head;
struct node *ptr;
struct node *temp;
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
    printf("\nChoose your choise:  0.Delete at begining    1.Delete at end    2.Delete at position\n-->");
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
    }
}

int insert_pos(int value)
{
    int position,i;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d",&position);
    newnode -> info = value;
    ptr = head;
    if (position == 0)
    {
        newnode -> next = head;
        head = newnode;
    }
    else
    {
        for (i = 0;i < position; i++)
        {
            ptr = ptr -> next ;
            if(ptr == NULL)
            {
                printf("\nPosition not found!Please enter valid position\n");
                return 0;
            }
         }
        newnode -> next = ptr ->next;
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
        head = NULL;
        printf("The deleted item is %d\n",head->info);
        free(head);
    }
    else
    {
        ptr = head;
        while(ptr -> next != NULL)
        {
            temp = ptr;
            ptr = ptr -> next;
        }
        temp -> next = NULL;
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
        temp = ptr -> next;
        ptr -> next = temp -> next;
        printf("The deleted item is %d\n",temp->info);
        free(temp);
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
