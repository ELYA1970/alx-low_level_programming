#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 *@str: string
 *Return: return a string
 */
char *cap_string(char *str)
{
	int i, l = strlen(str);

	for (i = 0 ; i <= l - 1 ; i++)
	{
	if (islower(str[i]))
	str[i] = toupper(str[i]);
	}
	return (str);
}
