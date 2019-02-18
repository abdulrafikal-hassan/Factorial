/*This C program is to check whether a given number is prime or not*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int p,d, flag;
	printf("Please enter a number: ");
	scanf("%d", &p);
	flag = 1;		/* Assuming p is prime*/
	for(d=2; d<=p-1; d++)	/* d<=p/2  will be correct */
		if(p%d==0)	/* False if number is prime */
	{
		flag=0;
		break;
	}
	if(flag==0 || p==1 || p==0)
		{
		printf("%d is not prime", p);
		}	else
		{
			printf("%d is prime", p);
		   getch();
		}
}
