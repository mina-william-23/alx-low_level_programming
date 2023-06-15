#include "lists.h"

/**
 * print_dlistint - print double linked list
 * @h: head of list
 * Return: size of linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t sz = 0;
	const dlistint_t *head = h;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		sz++;
	}
	return (sz);
}
