#include "hash_tables.h"
/**
 * handle_collision - test if collision in hash table
 * @head: head of index of collision
 * @key: key to search for
 * @value: value fo key
 * Return: (1) collision resolved (0) no collision
 */
int handle_collision(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *tmp = head;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
/**
 * hash_table_set - set a new element in table
 * @ht: hash table object
 * @key: key string
 * @value: value of key
 * Return: 0 fail 1 success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node;

	if (!ht || !key)
		return (0);

	new_node = malloc(sizeof(hash_node_t *));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	idx = key_index(key, ht->size);
	if (ht->array[idx] == NULL)
		ht->array[idx] = new_node;
	else
	{
		if (handle_collision(ht->array[idx], key, value) == 1)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}
	return (1);

}
