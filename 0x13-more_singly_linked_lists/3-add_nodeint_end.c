#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of list
 * @n:an integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1;
	listint_t *node2 = *head;

	node1 = malloc(sizeof(listint_t));
	if (!node1)
		return (NULL);
	node1->n = n;
	node1->next = NULL;
	if (*head == NULL)
	{
		*head = node1;
		return (node1);
	}
	while (node2->next)
		node2 = node2->next;
	node2->next = node1;
	return (node1);
}
