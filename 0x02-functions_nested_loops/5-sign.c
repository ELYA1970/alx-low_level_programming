#include "main.h"
/**
 * print_sign - print if an integer is positive or negetive or 0
 *@r: input number
 *Return: 1 or -1 or 0
 */
int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
