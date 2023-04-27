#include "lists.h"
/**
 * list_len - print linked list list_t
 * @h: head of linked list
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
