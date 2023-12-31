#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp;
int size=0;
void Insert()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=newnode;
	printf("\n Enter the element :");
	scanf("%d",&newnode->data);
	if(head==NULL)
	       head=newnode;
	 else
	 {
	 	temp=head;
	 	while(temp->next!=head)
		{
			temp=temp->next;
		}
	 	temp->next=newnode;
		newnode->next=head;
	 }
	 size++;
}
void search()
{
	int item;
	if(head==NULL)
		printf("\n Empty Linked list !!!");
	else
	{
		printf("\n Enter the elements to be searched : ");
		scanf("%d",&item);
		temp=head;
		int f=0;
		int i=0;
		while(temp->next!=head)
		{
			i++;
			if(temp->data==item)
			{
				printf("\n The item is found  as the %d th node in the list ",i);
				f=1;
				break;
			}
			temp=temp->next;
		}
		if(f==0)
			printf("\n Node not found !!");
	}
}


void Display()
{
	if(head==NULL)
		printf("\n Empty Linked list !!!");
	else
	{
		struct node *temp;
		temp=head;
		while(temp->next!=head)
		{
			printf("%d  ",temp->data);
			temp=temp->next;
		}
		printf("%d  ",temp->data);
	}
}
int main()
{
int ch;
 printf("\n Linked List Insertion \n");
printf("\n ----------------------------------------------\n");
printf(" 1. Insert \n 2. Search \n3. DISPLAY \n 4. EXIT \n");
do
{
 printf("\n Choose any one of the operation : ");
 scanf("%d",&ch);
 switch(ch)
 {
	case 1: Insert();
                 break;
	case 2: search();
    		break;
    	case 3: Display();
                  break;
	case 4: printf("\n Program exited !!!");
                  return 0;
	default : printf("\n Not a valid choice !!!!");
                  break;
 }
 }
 while(1);
 } 
