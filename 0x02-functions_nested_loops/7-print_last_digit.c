#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @r: an integer entered by user
 * Return: the last digit
 */
int print_last_digit(int r)
{
	r = i % 10;
	if (r >= 0)
	{
		_putchar('0' + r);
		return (r);
	}
	else
	{
		_putchar('0' - r);
		return (-r);
	}
}
