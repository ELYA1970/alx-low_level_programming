#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked list_t list
 * @h: a pointer to a constant structure
 * Return: an unsigned integer that represents the number of elements
 */
size_t list_len(const list_t *h)
{

	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
