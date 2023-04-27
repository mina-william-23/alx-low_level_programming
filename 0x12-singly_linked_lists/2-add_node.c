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
 * add_node - print linked list list_t
 * @head: pointer to head of linked list
 * @str: data to be inserted in new head
 * Return: the new head pointer
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	new_head->next = NULL;

	if (*head)
		new_head->next = *head;

	 *head = new_head;

	return (new_head);
}
