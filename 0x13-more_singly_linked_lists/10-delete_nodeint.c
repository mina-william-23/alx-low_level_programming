#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to head
 * @index: position to delete at
 * Return: (1) success (-1) fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *current = *head;
	unsigned int i = 0;

	while (current && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (i != index || current == NULL)
		return (-1);

	if (prev)
		prev->next = current->next;
	else
		*head = (*head)->next;

	free(current);

	return (1);
}
