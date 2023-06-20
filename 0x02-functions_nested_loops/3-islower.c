#include "main.h"
/**
 *_islower - print if a character is lowercase or not
 *
 * Return: Always 0
 */
int _islower(int c)
{
	/*  c is an integer represents code ASCII of character */
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
