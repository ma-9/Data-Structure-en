//	Doubly Linked List
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
//	UDF Declarations
void creation();
void tra();

void IF();	//	Insert <- First
void IL();	//	insert <- Last
void IM();	//	Insert <- Middle

void DF();	//	Delete <- First
void DL();	//	Delete <- Last
void DM();	//	Delete <- Middle

void srch();
void copy();
void mrg();
void change();	//	Replacing Existing Value
//	Creating Node Structure
struct node
{
	int data;
	struct node  *next, *prev;
};

//	Gloabal Variable Declaration
int 	pos,key,found=0,ch,i,value;
struct node *temp,*head=NULL,*newnode,*location,*rtemp,*head1=NULL;

//	UDF Definitions

//	Main Function Definition
void main()
{
	clrscr();
	while(1)
	{
		printf("\n\t\t\t***Doubly Linked List***");
		printf("\n1. Creation ");
		printf("\n2. Traversal ");
		printf("\n3. IF Insert <- First ");
		printf("\n4. IL Insert <- Last ");
		printf("\n5. IM Insert <- Middle ");
		printf("\n6. DF Delete <- First ");
		printf("\n7. DL Delete <- Last ");
		printf("\n8. DM Delete <- Middle ");
		printf("\n9. Searching data ");
		printf("\n10. Copying Node");
		printf("\n11. Merging two nodes together ");
		printf("\n12. Changing the Value ");
		printf("\n13. Exit ");

		//	Getting Choice
		printf("\nEnter Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	creation();
			break;

			case 2: tra();
			break;

			case 3: IF();
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

			default: printf("\nInvalid Choice....");
		}
	}
}

//	UDF definitons

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
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=NULL;
	newnode->prev=NULL;
	}
	else
	{
		printf("\n\t\t\tHey You have already created a NODE..\n\n");
	}
}

void tra()
{
	printf("\nDoubly Linked List\t");
	temp=head;
	rtemp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("\t");
	while(rtemp->next!=NULL)
	{
		rtemp=rtemp->next;
	}
	while(rtemp!=NULL)
	{
		printf("<-%d",rtemp->data);
		rtemp=rtemp->prev;
	}
	printf("\n\n");
}

void IF()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	head->prev=newnode;
	newnode->next=head;
	newnode->prev=NULL;
	head=newnode;
}

void IL()
{
	temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Value; ");
	scanf("%d",&value);
	newnode->data=value;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
	newnode->next=NULL;
}

void IM()
{
	temp=head;
	printf("\nEnter Position where you want to add Node...");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	for(i=1;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	newnode->prev=temp;
	newnode->next=temp->next;
	rtemp=temp->next;
	temp->next=newnode;
	rtemp->prev=newnode;
}

void DF()
{
	head=head->next;
	head->prev=NULL;
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
	printf("\nEnter Position where you want to perform Deletion..");
	scanf("%d",&pos);
	for(i=1;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
	rtemp=temp->next;
	rtemp->prev=temp;
}

void srch()
{
	temp=head;
	printf("\nEnter data that you want to search...");
	scanf("%d",&key);
	while(temp!=NULL && found==0)
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
	}
	if(found==1)
	{
		printf("\nYour data %d is Located at %u",key,location);
	}
	else
	{
		printf("\nData not Found");
	}
}

void copy()
{
	struct node *tp,*dc;
	temp=head;
	while(temp!=NULL)
	{
		if(head1==NULL)
		{
		head1=newnode=(struct node*)malloc(sizeof(struct node));
		newnode->prev=NULL;
		}
		else
		{
		dc=newnode;
		newnode->next=(struct node*)malloc(sizeof(struct node));
		newnode=newnode->next;
		newnode->prev=dc;
		dc=dc->next;
		}
		newnode->next=NULL;
		newnode->data=temp->data;
		temp=temp->next;
	}
	//	Printing Copied Node
	printf("\nCopied DLL\t\t");
	tp=head1;
	while(tp!=NULL)
	{
		printf("%d->",tp->data);
		tp=tp->next;
	}
	printf("\t");
	tp=head1;
	while(tp->next!=NULL)
	{
		tp=tp->next;
	}
	rtemp=tp;
	while(rtemp!=NULL)
	{
		printf("<-%d",rtemp->data);
		rtemp=rtemp->prev;
	}
	printf("\n");
}

void mrg()
{
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	head1->prev=temp;
	temp->next=head1;

}