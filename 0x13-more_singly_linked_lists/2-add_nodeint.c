#include "lists.h"
/**
 * add_nodeint - add node at beginning of list
 * @head: head
 * @n: data of new head
 * Return: new head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	/* may be check head itself not null */
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = NULL;

	if (*head)
		new_head->next = *head;

	*head = new_head;
	return (*head);
}
