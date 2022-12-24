#include<stdio.h>
#include<stdlib.h>
#define node_num 500
int avail = 0;
struct node_type
{
	int info,next;
};
struct node_type node[node_num];
int getnode();
void freenode(int);
void insafter(int,int);
void delafter(int);
int main()
{
	int position, value,choice;
	while(1)
	{
		printf("Input your choice: \n");
		printf("0: Insertion         1:Deletion\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0:
				printf("Enter the position and value: ");
				scanf("%d%d",&position,&value);
				insafter(position,value);
				break;
			case 1:
				printf("Enetr the position you want to delete: ");
				scanf("%d",&position);
				delafter(position);
				break;
			default:
				printf("Enter the valid operation");
		}
	}
	
		
}
int getnode()
{
	int p;
	if (avail == -1)
	{
		printf("Data can't be added");
		exit(1);
	}
	p = avail;
	avail = node[avail].next;
	return  p;
}
void freenode(int p)
{
	node[p].next = avail;
	avail = p;
}
void insafter(int p,int x)
{
	int q;
	if(p == -1)
	{
		printf("Invalid operations");
		exit(1);
	}
	q = getnode();
	node[q].info = x;
	node[q].next = node[p].next;
	node[p].next = q;
}
void delafter(int p)
{
	int q,x;
	if((p==-1)||node[p].next == -1)
	{
		printf("Invalid deletion");
		exit(1);
	}
	q = node[p].next;
	x = node[q].info;
	printf("The %d has been deleted\n",x);
	node[p].next = node[q].next;
	freenode(q);
}

