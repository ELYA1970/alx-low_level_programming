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
	strcpy(dest, src);
	return (dest);
}
