#include "lists.h"
/**
 * reverse_listint - reverse linked list
 * @head: pointer to head
 * Return: new head after reverse
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *nxt;

	if (!head || !*head)
		return (NULL);
	prev = NULL;
	current = *head;
	while (current && current->next)
	{
		nxt = current->next;
		current->next = prev;
		prev = current;
		current = nxt;
	}
	current->next = prev;
	*head = current;

	return (current);
}
