//	Simple Queue
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void enque();
void deque();
void peep();
void display();
void change();

int que[size],r=-1,f=-1,value,i,fs,ch,pos;

void main()
{
	clrscr();
	while(1)
	{
		printf("\n\t\t**Simple Queue**");
		printf("\n1. Enter Queue ");
		printf("\n2. Delete Queue ");
		printf("\n3. PEEP ");
		printf("\n4. Display Queue ");
		printf("\n5. Change value");
		printf("\n6. Exit ");
		printf("\nEnter Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	enque();
			break;

			case 2:	deque();
			break;

			case 3:	peep();
			break;

			case 4:	display();
			break;

			case 5: change();
			break;

			case 6:	exit(0);
			break;

			default: printf("\n\tInvalid Choice ");
		}
	}
}
void change()
{
	int temp=0;
	printf("\nEnter Positioon where you want to change data: ");
	scanf("%d",&pos);
	for(i=0;i<(pos-1);i++)
	{
		temp++;
	}
	printf("\nEnter data: ");
	scanf("%d",&que[temp]);
}
void enque()
{
	if(r==(size-1))
	{
		printf("\n\tSimple Queue is Full.. ");
	}
	else
	{
		if(f==-1 && r==-1)
		{
			f=r=0;	// f=0 & r=0
		}
		else
		{
			r++;
		}
		printf("\nEnter Value: ");
		scanf("%d",&value);
		que[r]=value;
	}
}

void deque()
{
	if(f==-1 && r==-1)
	{
		printf("\n\tSimple Queue is Empty ");
	}
	else
	{
		value=que[f];
		printf("\nDeleted Value of Queue is %d",value);
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			f++;
		}
	}
}

void peep()
{
	if(r==(size-1))
	{
		fs=f-0;
	}
	else
	{
		fs=((size-1)-r);
	}
	printf("\n\tFree Space in Simple Queue is %d ",fs);
}

void display()
{
	if(f==-1 && r==-1)
	{
		printf("\n\tSimple Queue is Empty ");
	}
	else
	{
		for(i=f;i<=r;i++)
		{
			printf("\t%d",que[i]);
		}
	}
}