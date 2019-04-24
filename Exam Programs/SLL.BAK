#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

void creation();
void tra();
void IF();
void IL();
void IM();
void DF();
void DL();
void DM();
void srch();
void copy();
void mrg();
void change();

struct node
{
	int data;
	struct node *next,*prev;
};

int i,ch,pos,key;
struct node	*head=NULL,*head1=NULL,*temp,*location,*newnode;

void main()
{
	clrscr();
	while(1)
	{
		printf("\n\t\tSingly Linked List");
		printf("\n1.Creation ");
		printf("\n2.Traversal ");
		printf("\n3.IF Insert->First ");
		printf("\n4.IL Insert->Last ");
		printf("\n5.IM Insert->Middle ");
		printf("\n6.DF Delete->First ");
		printf("\n7.DL Delete->Last");
		printf("\n8.DM Delete->Middle");
		printf("\n9.Search in Node ");
		printf("\n10.Copy node");
		printf("\n11.Merge copied node");
		printf("\n12.Change the Value: ");
		printf("\n12.Exit ");

		printf("\n\t\tEnter Choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:	creation();
			break;

			case 2: tra();
			break;

			case 3:	IF();
			break;

			case 4: IL();
			break;

			case 5: IM();
			break;

			case 6: DF();
			break;

			case 7: DL();
			break;

			case 8: DM();
			break;

			case 9: srch();
			break;

			case 10: copy();
			break;

			case 11: mrg();
			break;

			case 12: change();
			break;

			case 13: exit(0);
			break;

			default: printf("\nInvalid Number entered.");
		}
	}
}

void change()
{
	temp=head;
	printf("\nEnter Positioon where you want to change data: ");
	scanf("%d",&pos);
	for(i=0;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	printf("\nEnter data: ");
	scanf("%d",&temp->data);
}
void creation()
{
	if(head==NULL)
	{
		head=newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter Data: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
	}
	else
	{
		printf("\nLinked list is already created.!!!!!");
	}
}

void tra()
{
	printf("\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void IF()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Data: ");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}

void IL()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=NULL;
	printf("\nEnter Data: ");
	scanf("%d",&newnode->data);
}

void IM()
{
	printf("\nEnter position to enter data: ");
	scanf("%d",&pos);
	temp=head;
	for(i=0;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Data: ");
	scanf("%d",&newnode->data);
	newnode->next=temp->next;
	temp->next=newnode;
}

void DF()
{
	head=head->next;
}

void DL()
{
	temp=head;
	while(temp->next->next!=NULL)
	{
	 temp=temp->next;
	}
	temp->next=NULL;
}

void DM()
{
	temp=head;
	printf("\nEnter position to delete  data ");
	scanf("%d",&pos);
	for(i=0;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
}

void srch()
{

}

void copy()
{

}

void mrg()
{

}