#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: string
 *@b: character
 *@n: an unsigned integer
 *Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s , b , sizeof(char) * n);
	return (s);
}
