#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of list
 * index: index of node wanted
 * Return: node at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && index > i)
	{
		head = head->next;
		i++;
	}
	return (head);
}
