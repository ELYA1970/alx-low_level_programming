#include "main.h"
/**
 * _abs - print the absolute value of an integer
 *@r: integer entered by user
 *Return: the absolute value of an integer
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
	_putchar('\n');
}
