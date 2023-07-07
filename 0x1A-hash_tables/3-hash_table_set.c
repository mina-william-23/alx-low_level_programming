#include "hash_tables.h"
/**
 * handle_dup_key - test if collision in hash table
 * @head: head of index of collision
 * @key: key to search for
 * @value: value fo key
 * Return: (2 or 1) duplicate key resolved (0) error
 */
int handle_dup_key(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *tmp = head;
	char *new_value = NULL;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			if (value != NULL)
			{
				new_value = strdup(value);
				if (new_value == NULL)
					return (0);
			}
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	return (2);
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
	int fix_duplicate_key;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	
	fix_duplicate_key = handle_dup_key(ht->array[idx], key, value);
	if (fix_duplicate_key != 2)
		return (fix_duplicate_key);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || (value && new_node->value == NULL))
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
