#include "main.h"
#include <string.h>
/**
 * print_rev -  prints a string, in reverse
 * @s: string contains in 4-main.c file
 * Return: no return
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len ; i >= 0 ; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
