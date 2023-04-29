#include "lists.h"
/**
 * add_nodeint_end - add node at end of list
 * @head: head
 * @n: data of new tail
 * Return: new tail or null
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new_tail;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;

	tmp = *head;
	if (*head == NULL)
		*head = new_tail;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_tail;
	}

	return (new_tail);
}
