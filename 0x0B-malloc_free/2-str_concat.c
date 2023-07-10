#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2:  string
 * Return: return a string
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	a = malloc(sizeof(char) * (l1 + l2 + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0 ; i < l1 ; i++)
		a[i] = s1[i];
	for (i = 0 ; i < l2 ; i++)
		a[l1 + i] = s2[i];
	a[l1 + l2] = '\0';
	return (a);
}
