#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'
			, 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
	int i = 0;

	while (i < 27)
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
