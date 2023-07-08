#include "main.h"
/**
 * _isupper - checks for upercase character
 *@c: represent the value of character in code ascii
 * Return: no return
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
