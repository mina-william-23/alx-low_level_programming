#include "lists.h"
/**
 * free_listint2 - free allocated space of linked list
 * @head: pointer to head
 * set head to null
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *h;

	h = *head;
	while (h)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
	*head = NULL;
}
