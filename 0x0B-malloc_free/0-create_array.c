#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: usined int
 * @c: a character
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		*(p + i) = c;
	return (p);
}
