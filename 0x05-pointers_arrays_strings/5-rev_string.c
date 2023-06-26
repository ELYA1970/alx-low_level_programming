#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string, in reverse
 * @s: string
 * Return: no return
 */
void rev_string(char *s)
{
	int l = strlen(s);
	int i;

	for (i = l - 1 ; i >= 0 ; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
