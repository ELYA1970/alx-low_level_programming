#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: integer
 *
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int b;

	b = i % 10;
	if (b >= 0)
	{
		_putchar('0' + r);
		return (b);
	}
	else
	{
		_putchar('0' - r);
		return (-b);
	}
	_putchar('\n');
}
