#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	char *delim = "";

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				printf("%s'%s': '%s'", delim, head->key, head->value);
				delim = ", ";
				head = head->next;
			}
		}
	}
	printf("}\n");
}
