#include "hash_tables.h"

/**
 * hash_table_get - get value of key in hash table if exist
 * @ht: hashtable
 * @key: key to search for
 * Return: value if key exist or NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
