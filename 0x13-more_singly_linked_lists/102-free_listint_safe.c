#include "lists.h"
/**
 * free_listint_safe - free single linked list (hmay be has a loop)
 * @h: pointer to head
 * Return: (0) size of linked list after being free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *loopstart, *temp, *current;

	slow = fast = *h;
	/* detect if there is a loop */
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	/* if there is a loop break it to nomral one */
	if (slow == fast)
	{
		loopstart = *h;
		/* distance from slow and fast meet  to loop start equal */
		/* distance from start to loop start */
		while (slow->next != loopstart->next)
		{
			slow = slow->next;
			loopstart = loopstart->next;
		}
		slow->next = NULL;
	}
	/* free normal linked list as usual */
	current = *h;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*h = NULL;
	return (0);
}
