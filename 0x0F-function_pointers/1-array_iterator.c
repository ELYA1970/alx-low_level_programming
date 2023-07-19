#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: is an array of integers
 * @size: int
 * @action: function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
