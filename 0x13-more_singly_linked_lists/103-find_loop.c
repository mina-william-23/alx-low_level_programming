#include "lists.h"
/**
 * find_listint_loop - find loop in linkedlist  if exists
 * @head: head
 * Return: address of loop start of NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);
	slow = head;
	fast = head;
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
		fast = head;
		/* distance from slow and fast meet to loop start equal */
		/* distance from start to loop start */
		while (slow->next != fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
		/* if slow == fast that means that both standing at loop start*/
		/* if not that mean that next one is that loop start */
		return (slow == fast ? slow ? slow->next);
	}
	return (NULL);
}
