#include "main.h"
/**
 * more_numbers - print numbers 10 times
 * Return: no return
 */
void more_numbers(void)
{
	int counter;

	counter = 0;
	while (counter < 10)
	{
		int i;

		for (i = 0 ; i < 15 ; i++)
		{
			if (i >= 10)
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		counter++;
		_putchar('\n');
	}
}
