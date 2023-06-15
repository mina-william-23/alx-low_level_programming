#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head of list
 * @idx: index of node wanted
 * @n: data
 * Return: node at that index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *head;

	if (h == NULL)
		return (NULL);
	head = *h;
	while (head && idx > i)
	{
		head = head->next;
		i++;
	}

	if (i != idx)
		new_node = NULL;
	else if (i == 0)
		new_node = add_dnodeint(h, n);
	else if (head->next == NULL)
		new_node = add_dnodeint_end(h, n);
	else
	{
		new_node = malloc(sizeof(dlistint_t *));
		if (!new_node)
			return (NULL);
		new_node->n = n;

		head->prev->next = new_node;
		new_node->prev = head->prev;
		head->prev = new_node;
		new_node->next = head;
	}
	return (new_node);
}
