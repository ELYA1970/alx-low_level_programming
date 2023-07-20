#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 * Return: the sum of all parameters as integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int s = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		int x;

		x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
