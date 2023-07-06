#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of hashtable
 * Return: NULL if failed malloc else pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs_table = malloc(sizeof(hash_table_t));

	if (!hs_table)
		return (NULL);
	hs_table->size = size;
	hs_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hs_table->array == NULL)
		return (NULL);
	return (hs_table);
}
