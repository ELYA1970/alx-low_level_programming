#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
		else if (i == '9')
			putchar('$');
	}
	putchar('\n');
	return (0);
}
