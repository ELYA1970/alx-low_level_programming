#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	if (n == 98)
	{
		printf("the number is positive\n");
	}
	else if (n == -98)
	{
		printf("the number is negative\n");
	}
	else if(n == 0)
	{
		printf("the number is zero\n");
	}
	return (0);
}
