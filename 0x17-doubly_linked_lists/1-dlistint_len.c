#include "lists.h"

/**
 * dlistint_len - print double linked list
 * @h: head of list
 * Return: size of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t sz = 0;
	const dlistint_t *head = h;

	while (head)
	{
		head = head->next;
		sz++;
	}
	return (sz);
}
