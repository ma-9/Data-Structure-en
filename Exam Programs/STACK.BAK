//	Stack Program
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

void push();
void pop();
void peep();
void display();
void change();	//	Change Existing Value;

int top=-1,stack[size],i,ch,f,value,pos;

void main()
{
	clrscr();
	while(1)
	{
		printf("\n\t\t**Stack Program**");
		printf("\n1. PUSH ");
		printf("\n2. POP ");
		printf("\n3. PEEP ");
		printf("\n4. DISPLAY ");
		printf("\n5. CHANGE ");
		printf("\n6. EXIT ");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	push();
			break;

			case 2:	pop();
			break;

			case 3:	peep();
			break;

			case 4: display();
			break;

			case 5: change();
			break;

			case 6: exit(0);
			break;

			default:printf("\n\tInvalid Choice... ");
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
	scanf("%d",&stack[temp]);
}
void push()
{
	if(top==(size-1))
	{
		printf("\n\tStack is Full ");
	}
	else
	{
		if(top==-1)
		{
			top=0;
		}
		else
		{
			top++;
		}
		printf("\nEnter Value: ");
		scanf("%d",&value);
		stack[top]=value;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\n\tStack is Empty");
	}
	else
	{
		value=stack[top];
		printf("\nPopped Value is %d",value);
		if(top==0)
		{
			top=-1;
		}
		else
		{
			top--;
		}
	}
}

void peep()
{
	f=((size-1)-top);
	printf("\nFree Space in Stack is %d ",f);
}

void display()
{
	if(top==-1)
	{
		printf("\n\tQueue is Empty....");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("\n%d",stack[i]);
		}
	}
}