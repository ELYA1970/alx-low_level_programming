#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: strin
 * Return: returns NULL if str = NULL
 */
char *_strdup(char *str)
{
	unsigned int l = 0;
	char *p;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	p = malloc(sizeof(char) * (l + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
		p[i] = str[i];
	p[l] = '\0';
	return (p);
}
