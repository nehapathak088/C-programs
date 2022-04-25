#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter the frist number");
	scanf("%d",&a);
	printf("\nEnter the second number");

	scanf("%d",&b);
	printf("\nEnter the thrid number");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n A is big");
		}
		else
		{
			printf("\n C is big");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n A is big");
		}
		else
		{
			printf("\n c is big");
		}
	 }
		getch();
}