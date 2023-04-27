#include "lists.h"
/**
 * _strlen - compute string length
 *
 * @s: pointer to string
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * add_node_end - print linked list list_t
 * @head: pointer to head of linked list
 * @str: data to be inserted in new head
 * Return: tail pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	static list_t *tail;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = new_node;
	}
	tail = new_node;

	return (tail);
}
