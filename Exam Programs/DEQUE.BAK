/*
	Double Ended Queue
Old	IR = Insertion From Rear	DF = Deletion From Front
New	IF = Insertion From Front	DR = Deletion From Rear

*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

//     	Global Variable Declaration
int  	pos,dq[size],value,f=-1,r=-1,i,disp,a,ch;

//	UDF declaration/Prototyping

void IR(); // 		Old Method (Insertion from Rear)

void IF(); // New (Insertion From Front)

void DF(); //		Old Method (Deletion From Front)

void DR(); // New (Deletion from Rear)

void peep();
void display();
void change();	// Change Existing Value



//	Main Function
void main()
{
	clrscr();
	printf("\n\t\t\t****Double Ended Queue****");
	while(1)
	{
		printf("\n1.IR : Insert <- Rear");
		printf("\n2.IF : Insert <- Front");
		printf("\n3.DF : Delete <- Front");
		printf("\n4.DR : Delete <- Rear");
		printf("\n5.Peep Function");
		printf("\n6.Display the Queue");
		printf("\n7.Change");
		printf("\n8.Exit");
		a:
		//	Getting Users Choice
		printf("\nEnter Your Choice: ");
		scanf("%d",&ch);
		//	Switch Statement
		switch(ch)
		{
			case 1: IR();	break;
			case 2:	IF();	break;
			case 3: DF();	break;
			case 4:	DR();	break;
			case 5:	peep();	break;
			case 6:	display();	break;
			case 7: change();	break;
			case 8:	exit(0);	break;
			default: printf("\nInvalid Choice.."); goto a;
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
	scanf("%d",&dq[temp]);
}
void IR()  //	Insert <- Rear
{
	if((f==0 && r==(size-1)) || f==r+1)
	{
		printf("\n\tDouble-Ended Queue is Full...");
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
		dq[r]=value;
	}

}


void DF()   //	Delete <- Front
{
	if(f==-1 && r==-1)
	{
		printf("\n\tDouble-Ended Queue is Empty");
	}
	else
	{
		value=dq[f];
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



void IF()     //	Insert <- Front
{
	if((f==0 && r==(size-1)) || f==r+1)
	{
		printf("\n\tDouble-Ended Queue is Full...");
	}
	else
	{
		if(f==-1 && r==-1)
		{
			f=r=0;
		}
		else
		{
			if(f==0)
			{
				f=(size-1);
			}
			else
			{
				f--;
			}
		}
		printf("\nEnter Value:	");
		scanf("%d",&value);
		dq[f]=value;
	}

}


void DR()	//	Delete <- Rear
{
	if(f==-1 && r==-1)
	{
		printf("\n\tDouble-Ended Queue is Empty");
	}
	else
	{
		value=dq[r];
		printf("\nPopped Value is :	%d",value);
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			if(r==0)
			{
				r=(size-1);
			}
			else
			{
				r--;
			}
		}
	}
}

void peep()
{
	if((f==0 && r==(size-1)) || f==r+1)
	{
		printf("\n\tDouble-Ended Queue is Full");
	}
	else
	{
		if(f>r)
		{
			disp=(f-r)-1;
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
		printf("\n\tDouble-Ended Queue is Empty");
	}
	else
	{
		if(r>=f)
		{
			for(i=f;i<=r;i++)
			{
				printf("\t%d",dq[i]);
			}
		}
		else
		{
			for(i=f;i<=(size-1);i++)
			{
				printf("\t%d",dq[i]);
			}
			for(i=0;i<=r;i++)
			{
				printf("\t%d",dq[i]);
			}
		}
	}
}