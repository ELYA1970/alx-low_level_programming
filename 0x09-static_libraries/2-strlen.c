#include "main.h"
/**
 * _strlen - a function that return lenth of strings
 * @s: string the paramete of our function
 * Return: return the length of string as an integer
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
