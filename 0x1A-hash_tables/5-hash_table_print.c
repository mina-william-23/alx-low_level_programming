#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	int not_first_element = 0;

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				if (not_first_element)
					printf(", ");
				printf("'%s': '%s'", head->key, head->value);
				not_first_element = 1;
				head = head->next;
			}
		}		
	}
	printf("}\n");
}
