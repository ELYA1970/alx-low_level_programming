#include "main.h"
/**
 *_islower - print if a character is lowercase or not
 *@c: character in code ASCI
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
