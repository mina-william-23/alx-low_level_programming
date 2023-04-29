#include "lists.h"
/**
 * pop_listint - remove first node and return its data
 * @head: pointer to head
 * Return: (0) if head = NULL of data of removed node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data = 0;

	if (*head)
	{
		data = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	return (data);
}
