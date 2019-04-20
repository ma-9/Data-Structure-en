#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

void fne();   //	FNE = Find Negative Elements in Array
void tne();	//	TNE = Total Number of Negative Elements
void se();	//	SE = Sum of elements of Array
void teo();	//	TEO = Total Number of Even and Odd Numbers
void fmm();	//	FMM = Find Maximum and Minimum of Array
void ie();	//	IE = Insert element in Array
void disp();	//	DISP = Display Array
void fun();	//	FUN = Find Unique Number
void sa();	//	SA = Sorting Array element in Ascending Order

int ary[size],i,ch,top=-1,cary[size];

main()
{
	while(1)
	{
		printf("\n1. Insert element in Array");
		printf("\n2. Find Negative elements in Array");
		printf("\n3. Sum of Given Elements..");
		printf("\n4. Total Negative Numbers ");
		printf("\n5. Total Even and Odd elements ");
		printf("\n6. Find Maximum and Minimum ");
		printf("\n7. Find All Unique Numbers");
		printf("\n8. Sorting an Array in Ascending Order ");
		printf("\n88. DISPLAY ARRAY ");
		printf("\n99. EXIT");
		printf("\nEnter Your Choice: ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: ie(); 	break;
			case 2: fne();	break;
			case 3: se();	break;
			case 4: tne();	break;
			case 5: teo();	break;
			case 6: fmm();	break;
			case 7: fun();	break;
			case 8:	sa();	break;
			case 88: disp();break;
			case 99: exit(0);	break;
			default:	printf("\n\tinvalid Choice..!");
		}
	}
}
void ie()       //	Inserting an Element in Array
{
	if(top==(size-1))
	{
		printf("\n\t\tArray is FULL..");
	}
	else
	{
		top++;
		printf("\nEnter Value: ");
		scanf("%d",&ary[top]);
	}
}
void fne()	//	Find Negative Elements
{
	if(top==-1)
	{
	printf("\nArray Has None Element");
	}
	else
	{
	for(i=0;i<=top;i++)
	{
		if(ary[i] < 0)
		{
			printf("\n\t\t\t%d",ary[i]);
		}
	}
	}
}

void se()      //	Sum of all Elements
{
	if(top==-1)
	{
	printf("\nArray Has None Element");
	}
	else
	{
	int sum=0;
	for(i=0;i<=top;i++)
	{
	      sum+=ary[i];
	}
	printf("\nSum of Array is %d",sum);
	}
}
void tne()    //	Total number of negative elements
{
	if(top==-1)
	{
	printf("\nArray Has None Element");
	}
	else
	{
	int k=0;
	for(i=0;i<=top;i++)
	{
		if(ary[i] < 0)
		{
			k++;
		}
	}
	printf("\n\tTotal Number of Negative elements of Array.. %d",k);
	}
}
void teo()   	//	Total odd or even element
{
	if(top==-1)
	{
	printf("\nArray Has None Element");
	}
	else
	{
	int k,m;
	k=m=0;
	for(i=0;i<=top;i++)
	{
		if(ary[i]%2==0)
		{
			k++;
		}
		else
		{
			m++;
		}
	}
	printf("\n\n\tTotal Even : %d and Total Odd : %d",k,m);
	}
}

void fmm()     //	Find Maximum and Minimum
{
	if(top==-1)
	{
	printf("\nArray Has None Element");
	}
	else
	{
	int max,min;
	max=min=ary[0];
	for(i=0;i<=top;i++)
	{
		if(ary[i]>max)
		{
			max=ary[i];
		}
		if(ary[i]<min)
		{
			min=ary[i];
		}
	}
	printf("\nMaximum : %d \nMinimum : %d",max,min);
	}
}
void disp()    //	Display Function
{
	printf("\n");
	if(top==-1)
	{
		printf("\nArray has None element");
	}
	else
	{
		printf("\nArray");
		for(i=0;i<=top;i++)
		{
			printf("\t%d",ary[i]);
		}
	}
}
void fun()       //	Find unique Numbers
{
	if(top==-1)
	{
		printf("\nArray has None Element");
	}
	else
	{
		int j;
		for(i=0;i<=top;i++)
		{
			int count=0;
			for(j=0;j<i;j++)
			{
				if(ary[i]==ary[j])
				{
					count=1;
				}
			}
			if(count==0)
			{
					printf("\t%d",ary[i]);
			}
		}
	}
}
void sa()	//	Sorting an Array element
{
	for(i=0;i<=top;i++)
	{
		cary[i]=ary[i];
	}
	//	Printing Copied Array
	for(i=0;i<=top;i++)
	{
		printf("\t%d",cary[i]);
	}
}
