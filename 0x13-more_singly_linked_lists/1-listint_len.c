#include "lists.h"
/**
 * listint_len - count linked list elements
 * @h: head
 * Return: size of linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
