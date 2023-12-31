#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: head of a list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{

		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
