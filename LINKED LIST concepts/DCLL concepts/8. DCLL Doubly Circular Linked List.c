//	Doubly Circular Linked List
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

int ch,i,pos,key,value,found=0;

struct node 
{
	int data;
	struct node *next,*prev;	
};

struct node *temp,*head=NULL,*last,*head1=NULL,*location,*newnode,*left;

main()
{
	while(1)
	{
		printf("\n******Doubly Circular Linked List******");
		printf("\n1.Creation ");
		printf("\n2.Traversal ");
		printf("\n3.IF ");
		printf("\n4.IL ");
		printf("\n5.IM ");
		printf("\n6.DF ");
		printf("\n7.DL ");
		printf("\n8.DM ");
		printf("\n9.Searching ");
		printf("\n10.Copy ");
		printf("\n11.Merging ");
		printf("\n12.Exit");
		printf("\nEnter Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: creation();	break;
			case 2: tra();		break;
			case 3: IF();		break;
			case 4: IL();		break;
			case 5: IM();		break;
			case 6: DF();		break;
			case 7: DL();		break;
			case 8: DM();		break;
			case 9: srch();		break;
			case 10:copy();		break;
			case 11:mrg();		break;
			case 12:exit(0);	break;
			default: printf("\nInvalid Choice: "); break;
		}
	}
}

void creation()
{
	if (head==NULL)
	{
		head=newnode=(struct node*)malloc(sizeof(struct node));
	}
	else
	{
		left=newnode;
		newnode->next=(struct node*)malloc(sizeof(struct node));
		newnode=newnode->next;
		newnode->prev=left;
		
	}
	printf("\nEnter value: ");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=head;
	head->prev=newnode;
}
void tra()
{
	printf("\nDoubly Circular Linked List\t\t");
	temp=head;
	do
	{
		printf("%d->",temp->data);
		temp=temp->next;
		
	}while(temp!=head);
	printf("\n");
	temp=head->prev;
	do
	{
		printf("<-%d",temp->data);
		temp=temp->prev;
		
	}while(temp!=head->prev);
	printf("\n");
}
void IF()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=head;
	newnode->prev=head->prev;
	head->prev=newnode;
	head=newnode;
	newnode->prev->next=newnode;
}
void IL()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	head->prev->next=newnode;
	newnode->prev=head->prev;
	newnode->next=head;
	head->prev=newnode;
}
void IM()
{
	printf("\nEnter Position where you want to add node..");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	temp=head;
	for(i=1;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next->prev=newnode;
	newnode->prev=temp;
	temp->next=newnode;
}
void DF()
{
	head->next->prev=head->prev;
	head->prev->next=head->next;
	head=head->next;
}
void DL()
{
	head->prev=head->prev->prev;
	head->prev->next=head;
}
void DM()
{
	printf("\nEnter Position From where you want to Delete node..");
	scanf("%d",&pos);
	for(i=1;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
	temp->next->prev=temp;
}
void srch()
{
	temp=head;
	printf("\nEnter Key that you want to Search..");
	scanf("%d",&key);
	do
	{
		if(key==temp->data)
		{
			found=1;
			location=temp;
		}
		else
		{
			temp=temp->next;
		}
		
	}while(temp!=head && found==0);
	if(found==1)
	{
		printf("\nYour data %d is Located at %u",key,location);
	}
	else
	{
		printf("\nNo Records Found..");
	}
}
void copy()
{
	temp=head;
	do
	{
		if(head1==NULL)
		{
			head1=newnode=(struct node*)malloc(sizeof(struct node));
		}
		else
		{
			last=newnode;
			newnode->next=(struct node*)malloc(sizeof(struct node));
			newnode=newnode->next;
			newnode->prev=last;
		}
		newnode->data=temp->data;
		newnode->next=head1;
		head1->prev=newnode;
		temp=temp->next;
		
	}while(temp!=head);	
	
	//	Printing Copied Node
	printf("\nCopied Node\t\t");
	temp=head1;
	do
	{
		printf("%d->",temp->data);
		temp=temp->next;
		
	}while(temp!=head1);
	printf("\n");
	temp=head1->prev;
	do
	{
		printf("<-%d",temp->data);
		temp=temp->prev;
		
	}while(temp!=head1->prev);
}
void mrg()
{
	struct node *lastAddress;
	head->prev->next=head1;
	head1->prev->next=head;
	lastAddress=head1->prev;
	head1->prev=head->prev;
	head->prev=lastAddress;
}
