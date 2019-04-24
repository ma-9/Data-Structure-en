//	Circular Queue
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

//	Global Variable Declaration
int pos,cq[size],value,f=-1,r=-1,i,ch,disp;

//	UDF declarations
void encque();
void decque();
void peep();
void display();
void change();	//	Change Existing Value

//	Main Function
void main()
{
	clrscr();
	printf("\n\t\t\t****Circular Queue****");
	printf("\n1.Insert\n2.Delete\n3.Peep\n4.Display\n5.Change\n6.EXUT");
	while(1)
	{
		printf("\nEnter Your Choice:	");
		scanf("%d",&ch);
		//	Switch Statement
		switch(ch)
		{
			case 1:	encque();	break;
			case 2:	decque();	break;
			case 3:	peep();		break;
			case 4:	display();	break;
			case 5: change();	break;
			case 6:	exit(0);	break;
			default: printf("\nInvalid Choice..");
		}
	}
}

//	UDF definitions

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
	scanf("%d",&cq[temp]);
}

void encque()
{
	if((f==0 && r==(size-1)) || f==r+1)
	{
		printf("\n\tCircular Queue is Full...");
	}
	else
	{
		if(f==-1 && r==-1)
		{
			f=r=0;
		}
		else
		{
			if(r==(size-1))
			{
				r=0;
			}
			else
			{
				r++;
			}
		}
		printf("\nEnter Value:	");
		scanf("%d",&value);
		cq[r]=value;
	}
}

void decque()
{
	if(f==-1 && r==-1)
	{
		printf("\n\tCircular Queue is Empty");
	}
	else
	{
		value=cq[f];
		printf("\nPopped Value is :	%d",value);
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			if(f==(size-1))
			{
				f=0;
			}
			else
			{
				f++;
			}
		}
	}
}

void peep()
{
	if((f==0 && r==(size-1)) || f==r+1)
	{
		printf("\n\tCircular Queue is Full");
	}
	else
	{
		if(f>r)
		{
			disp=f-r;
		}
		else if(f==-1 && r==-1)
		{
			disp=size;
		}
		else
		{
			disp=((size-1)-(r-f));
		}
		printf("\nEmpty Space is : %d",disp);
	}
}

void display()
{
	if(f==-1 && r==-1)
	{
		printf("\n\tCircular Queue is Empty");
	}
	else
	{
		if(r>=f)
		{
			for(i=f;i<=r;i++)
			{
				printf("\t%d",cq[i]);
			}
		}
		else
		{
			for(i=f;i<=(size-1);i++)
			{
				printf("\t%d",cq[i]);
			}
			for(i=0;i<=r;i++)
			{
				printf("\t%d",cq[i]);
			}
		}
	}
}