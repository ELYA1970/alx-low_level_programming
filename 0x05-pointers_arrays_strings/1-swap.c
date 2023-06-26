#include "main.h"
/**
 * swap_int - swap two numbers
 * @a: pointe to number entered by user
 * @b: pointe to number entered by user
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
