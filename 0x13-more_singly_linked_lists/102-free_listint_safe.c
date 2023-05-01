#include "lists.h"
/**
 * free_listint_safe - free single linked list (hmay be has a loop)
 * @h: pointer to head
 * Return: (0) size of linked list after being free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h, *loopstart, *temp, *current;
	size_t sz = 0;

	if (!h || !*h)
		return (sz);
	while (fast && fast->next)
	{
		slow = slow->next, fast = fast->next->next;
		if (slow == fast) break;
	}
	if (slow == fast)
	{
		loopstart = *h;
		if (slow == loopstart)
		{
			while (slow->next != loopstart)
				slow = slow->next;
		}
		else
		{
			while (slow->next != loopstart->next)
                        	slow = slow->next, loopstart = loopstart->next;
		}
		slow->next = NULL;
	}
	current = *h;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
		sz++;
	}
	*h = NULL;
	return (sz);
}
