//	Simple Linked List	-	SLL
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

//	Struct Declaration/Definition
struct node
{
	int data;
	struct node *next;
};

//	UDF declarations
void creation(); //	Creation of Node
void tra();	// 	Traversal OR Display function

void IF();	//	Insert <- Front
void IL();	//	Insert <- Last
void IM();	//	Insert <- Middle

void DF();	//	Delete <- Front
void DL();	//	Delete <- Last
void DM();	//	Delete <- Middle

void srch();	// 	Searching data in node
void copy();	// 	copying the node data to another node/newnode
void mrg();	//	Merging two nodes together

//	Global Variable Declaration
int	value,ch,i,pos,key;
struct	node *head1=NULL, *head=NULL, *newnode, *temp, *location;

//	Main Function
void main()
{
	clrscr();
	printf("\n\n\t\t\t*****Simple Linked LIst*****");
	while(1)
	{
		printf("\n1. Creation ");
		printf("\n2. Traversal ");
		printf("\n3. IF- Insert<-Front ");
		printf("\n4. IL- Insert<-Last");
		printf("\n5. IM- Insert<-Middle");
		printf("\n6. DF- Delete<-Front");
		printf("\n7. DL- Delete<-Last");
		printf("\n8. DM- Delete<-Middle");
		printf("\n9. Search Data");
		printf("\n10. Copying data to another new node");
		printf("\n11. Merging Two Nodes");
		printf("\n12. Exit");
		printf("\n\nEnter Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	creation();
				break;
			case 2:	tra();
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
			case 10:copy();
				break;
			case 11:mrg();
				break;
			case 12:exit(0);
				break;
			default:	printf("\n\tInvalid Choice: ");
		}
	}
}

//	UDF definitions
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
	newnode->next=NULL;
}

void tra()
{
	printf("\nLinked List->\t\t");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void IF()	//	Insert<-Front
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=head;
	head=newnode;
}

void IL()	//	Insert<-Last
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value: ");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}

void IM()	//	Insert<-Middle
{
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter Value: ");
	scanf("%d",&value);
	newnode->data=value;
	temp=head;
	printf("\nEnter Position where You want to add Node: ");
	scanf("%d",&pos);
	for(i=1;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}

void DF()	//	Delete<-First
{
	head=head->next;
}

void DL()	//	Delete<-Last
{
	temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=NULL;
}

void DM()	//	Delete<-Middle
{
	temp=head;
	printf("\nEnter Position where You want to Perform Deletion: ");
	scanf("%d",&pos);
	for(i=1;i<(pos-1);i++)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
}

void srch()	//	Searching Data
{
	int f=0;
	temp=head;
	printf("\nEnter Key Whose Location You want to Know: ");
	scanf("%d",&key);
	while(temp!=NULL && f==0)
	{
		if(key==temp->data)
		{
			f=1;
			location=temp;
		}
		else
		{
			temp=temp->next;
		}

	}
	if(f==1)
	{
		printf("\nYour Location for %d is %u ",key,location);
	}
	else
	{
		printf("\nSorry..There is No Scope of Searching Key!!");
	}
}

void copy()	//	Copying node data to newnode
{
	temp=head;
	while(temp!=NULL)
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
		newnode->next=NULL;
		temp=temp->next;
	}
}

void mrg()    	//	Merging Two Nodes
{
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head1;
}