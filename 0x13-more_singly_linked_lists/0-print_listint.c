#include "lists.h"
/**
 * print_listint - print linked list elements
 * @h: head
 * Return: size of linked list
*/
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
