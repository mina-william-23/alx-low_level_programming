#include "lists.h"
/**
 * free_listint - free allocated space of linked list
 * @head: head
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
