#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: head of list
 * @n: value in new head
 * Return: new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new_node = malloc(sizeof(dlistint_t *));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (head == NULL || *head == NULL)
	{
		*head = new_node;
	}
	else
	{
		h = *head;
		while (h->next)
			h = h->next;
		h->next = new_node;
		new_node->prev = h;
	}

	return (new_node);
}
