#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at index
 * @head: pointer to head
 * @idx: position to insert at
 * @n: data to be inserted
 * Return: (NULL) if fail or node pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *current, *new_node;
	unsigned int i = 0;

	prev = NULL, current = *head;
	while (current && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (i != idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current;

	if (prev)
		prev->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
