#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: no return
 */
void puts2(char *str)
{
	int l = strlen(str);
	int i;

	for (i = 0 ; i < l ; i = i + 2)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
