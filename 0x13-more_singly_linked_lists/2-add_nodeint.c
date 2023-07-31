#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *zoo;

	zoo = malloc(sizeof(listint_t));
	if (zoo == NULL)
		return (NULL);
	zoo->n = n;
	zoo->next = *head;
	*head = zoo;
	return (*head);
}
