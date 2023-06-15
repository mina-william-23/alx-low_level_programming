#include "lists.h"

/**
 * free_dlistint - free double linked list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
