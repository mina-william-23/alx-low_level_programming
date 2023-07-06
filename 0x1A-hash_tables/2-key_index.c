#include "hash_tables.h"

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
