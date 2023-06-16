#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	for (i = 'a' ; i <= 'b' ; i++)
		putchar(i);
	putchar(i);
	return (0);
}
