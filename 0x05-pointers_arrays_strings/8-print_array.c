#include "main.h"
/**
 * print_array - print array elements
 * @n: number of elements in array
 * @a: an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (a[i] != a[n - 1])
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
