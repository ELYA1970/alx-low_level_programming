#include "main.h"
/**
 * _isdigit - print if a character is digit or not
 * @c: represent the value of character in code ascii
 * Return: no return
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
