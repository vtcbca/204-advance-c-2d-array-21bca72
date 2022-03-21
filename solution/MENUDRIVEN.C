/*write a Menu Driven program to perfor following task using different function catagory.
date:21/03/2022 */

#include<stdio.h>
#include<conio.h>
int menu();
void prime();
void palindrome(int);
void reverse();
void main()
{
	int c,a;
	clrscr();
	c=menu();
	clrscr();
	switch(c)
	{
		case 1: prime();
			break;
		case 2:	printf("\nEnter Any Value:");
			scanf("%d",&a);
			palindrome(a);
			break;
		case 3: reverse();
			break;
	}
	getch();
}
int menu()
{
	int choice;
	printf("\n\t\tMENU\n");
	printf("==================================================\n");
	printf("\n\t1.Prime Number\n\t2.Palindrome Number\n\t3.Reverse Number\n\t4.Print Even number till\n\t5.Exit\n");
	printf("==================================================\n");
	printf("\n\tEnter Your Choice:");
	scanf("%d",&choice);
	return choice;
}
void prime()
{
	int a,i,c=0;
	printf("Enter Any Number:");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	{
		printf("\n%d is not a prime number.",a);
	}
	else
	{
		printf("\n%d is a prime number.",a);
	}
}
void palindrome(int a)
{
	int i,s,r=0;
	s=a;
	while(s>0)
	{
		i=s%10;
		r=(r*10)+i;
		s=s/10;
	}
	if(a==r)
	{
		printf("\n%d is a Palindrome Number.",a);
	}
	else
	{
		printf("\n%d is not a Palindrome Number.",a);
	}
}
void reverse()
{
	int a,b=0,c;
	printf("\nEnter Any Number");
	scanf("%d",&a);
	while(a>0)
	{
		c=a%10;
		a=a/10;
		b=b*10+c;
	}
	print("\nReverse of Number:%d",b);
}






