#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: index of node wanted
 * Return: 1 success -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h, *pr, *nx;

	if (head == NULL)
		return (-1);
	h = *head;
	while (h && h->next && index > i)
	{
		h = h->next;
		i++;
	}

	if (i != index || !h)
		return (-1);

	pr = h->prev;
	nx = h->next;

	if (pr)
		pr->next = nx;
	else
		*head = nx;

	if (nx)
		nx->prev = pr;

	free(h);
	return (1);
}
