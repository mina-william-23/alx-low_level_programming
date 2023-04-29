#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to head
 * @index: position to find at
 * Return: (NULL) if not found or node pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = NULL;
	unsigned int idx = 0;

	while (head && idx < index)
	{
		head = head->next;
		idx++;
	}
	if (idx == index)
		tmp = head;

	return (tmp);
}
