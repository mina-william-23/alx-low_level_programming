#include "lists.h"
/**
 * sum_listint - computer sum of linked list data
 * @head: head
 * Return: sum or zero if empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
