#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/**
 * key_index - create hash from key
 * @key: string key
 * @size: size of hash table
 * Return: hash of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

/**
 * shash_table_create - create hash table
 * @size: size of hashtable
 * Return: NULL if failed malloc else pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hs_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hs_table = malloc(sizeof(shash_table_t));
	if (!hs_table)
		return (NULL);

	hs_table->size = size;
	hs_table->array = malloc(sizeof(shash_node_t *) * size);
	hs_table->shead = NULL;
	hs_table->stail = NULL;
	if (hs_table->array == NULL)
	{
		free(hs_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hs_table->array[i] = NULL;
	return (hs_table);
}

/**
 * handle_dup_key - test if collision in hash table
 * @head: head of index of collision
 * @key: key to search for
 * @value: value fo key
 * Return: (2 or 1) duplicate key resolved (0) error
 */
int handle_dup_key(shash_node_t *head, const char *key, const char *value)
{
	shash_node_t *tmp = head;
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
 * shash_table_set_sort - set a new element in table
 * @ht: hash table object
 * @new_node: new node to be sorted
 */
void shash_table_set_sort(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *head, *temp;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) <= 0)
	{
		ht->shead->sprev = new_node;
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else if (strcmp(new_node->key, ht->stail->key) >= 0)
	{
		ht->stail->snext = new_node;
		new_node->sprev = ht->stail;
		ht->stail = new_node;
	}
	else
	{
		head = ht->shead;
		while (strcmp(new_node->key, head->key) == 1)
			head = head->snext;
		new_node->snext = head;
		new_node->sprev = head->sprev;
		head->sprev->snext = new_node;
		head->sprev = new_node;
	}
}
/**
 * shash_table_set - set a new element in table
 * @ht: hash table object
 * @key: key string
 * @value: value of key
 * Return: 0 fail 1 success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new_node;
	int fix_duplicate_key;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	fix_duplicate_key = handle_dup_key(ht->array[idx], key, value);
	if (fix_duplicate_key != 2)
		return (fix_duplicate_key);

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->snext = NULL;
	new_node->sprev = NULL;
	if (new_node->key == NULL || (value && new_node->value == NULL))
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	shash_table_set_sort(ht, new_node);
	return (1);
}

/**
 * shash_table_get - get value of key in hash table if exist
 * @ht: hashtable
 * @key: key to search for
 * Return: value if key exist or NULL if not
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head;
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

/**
 * shash_table_print - print hash table
 * @ht: hash table pointer
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *head;
	char *delim = "";

	if (!ht)
		return;

	printf("{");
	for (head = ht->shead; head; head = head->snext)
	{
		printf("%s'%s': '%s'", delim, head->key, head->value);
		delim = ", ";
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print hash table reversed
 * @ht: hash table pointer
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tail;
	char *delim = "";

	if (!ht)
		return;

	printf("{");
	for (tail = ht->stail; tail; tail = tail->sprev)
	{
		printf("%s'%s': '%s'", delim, tail->key, tail->value);
		delim = ", ";
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete hash table content
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp, *head;

	for (i = 0; ht && i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	if (ht)
		free(ht->array);
	free(ht);
}

