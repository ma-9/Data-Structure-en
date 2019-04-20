//	Circular Linked List
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

//	Structure
struct node
{
	int data;
	struct node *next;
};

//	UDF declaration
void creation();// Creation of node and inserting data in it
void tra();     // Display the Node/ Traverse the Node

void IF();	// Insert<-Front
void IL();	// Insert<-Last
void IM();	// Insert<-Middle

void DF();	// Delete<-First
void DL();	// Delete<-Last
void DM();	// Delete<-Middle

void srch();	// Seaching the Data
void copy();	// Copying Existing node to another node
void mrg();	// Merging two nodes


//	Global Function Declaration
int 	pos,key,found=0,ch,i,value;
struct node *head=NULL,*temp, *temp1, *newnode, *location, *head1=NULL;

//	Main Function
void main()
{
	clrscr();
	while(1)
	{
		printf("\n\t\t\t*****Circular Linked List*****");
		printf("\n1. Creation ");
		printf("\n2. Traversal ");
		printf("\n3. IF - Insert<-First ");
		printf("\n4. IL - Insert<-Last ");
		printf("\n5. IM - Insert<-Middle ");
		printf("\n6. DF - Delete<-First ");
		printf("\n7. DL - Delete<-Last ");
		printf("\n8. DM - Delete<-Middle ");
		printf("\n9. Search Data ");
		printf("\n10. Copy the Node ");
		printf("\n11. Merging the Node ");
		printf("\n12. Exit ");

		//	Getting Choice
		printf("\nEnter Your Choice: ");
		scanf("%d",&ch);

		//    	SwitchCase Statement
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
			case 5:	IM();
				break;
			case 6: DF();
				break;
			case 7: DL();
				break;
			case 8: DM();
				break;
			case 9: srch();
				break;
			case 10:copy();
				break;
			case 11:mrg();
				break;
			case 12:exit(0);
				break;
			default:printf("\n\tInvalid Choice: Please enter Correct one.....");
		}
	}
}

void creation()
{
	if(head==NULL)
	{
	head=newnode=(struct node *)malloc(sizeof(struct node));
	}
	else
	{
	newnode->next=(struct node *)malloc(sizeof(struct node));
	newnode=newnode->next;
	}
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=head;
}

void tra()
{
	printf("\nCircular Linked List\t\t\t");
	temp=head;
	do
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}while(temp!=head);
	printf("\n");
}

void IF()
{
	temp=head;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	newnode->next=head;
	temp->next=newnode;
	head=newnode;
}

void IL()
{
	temp=head;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	newnode->next=head;
	temp->next=newnode;
}

void IM()
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Position where you want to add newnode...");
	scanf("%d",&pos);
	printf("\tEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	for(i=1;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}

void DF()
{
	temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=head->next;
	head=head->next;
}

void DL()
{
	temp=head;
	while(temp->next->next!=head)
	{
		temp=temp->next;
	}
	temp->next=head;
}

void DM()
{
	temp=head;
	printf("\nEnter Position where you want to delete node...");
	scanf("%d",&pos);
	for(i=1;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
}

void srch()
{
	temp=head;
	printf("\nSearch Data in Linked List : ");
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
		printf("\nYoue data %d is located at %u ",key,location);
	}
	else
	{
		printf("\nNo.. Key Found in Linked List...");
	}
}

void copy()
{
	temp=head;
	do
	{
		if(head1==NULL)
		{
		head1=newnode=(struct node *)malloc(sizeof(struct node));
		}
		else
		{
		newnode->next=(struct node *)malloc(sizeof(struct node));
		newnode=newnode->next;
		}
		newnode->data=temp->data;
		newnode->next=head1;
		temp=temp->next;
	}while(temp!=head);

	//	Printing Copied Node
	temp1=head1;
	printf("\nCoppied Circular Liked List\t\t\t");
	do
	{
		printf("%d->",temp1->data);
		temp1=temp1->next;
	}while(temp1!=head1);
	printf("\n");
}

void mrg()
{
	temp=head;
	temp1=head1;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	while(temp1->next!=head1)
	{
		temp1=temp1->next;
	}
	temp->next=head1;
	temp1->next=head;
}