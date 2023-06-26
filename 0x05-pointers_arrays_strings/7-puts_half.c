#include "main.h"
#include <string.h>
/**
 * puts_half - that prints half of a string
 * @str: string
 * Return: no return
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int i, x;

	if ((n % 2) != 0)
	x = (strlen(str) - 1) / 2;
	else
	x = strlen(str) / 2;
	for (i = x ; i <= n - 1 ; i++)
	putchar(*(str + i));
	putchar('\n');
}
