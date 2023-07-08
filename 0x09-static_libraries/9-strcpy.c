#include "main.h"
#include <string.h>
/**
 * _strcpy - that copies the string pointed to by src to dest
 * @src: string
 * @dest: string
 * Return: return a string aftrer copie
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
