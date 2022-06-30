#include "hash_tables.h"

/**
 * key_index - Generate key index
 *
 * @key: Key
 * @size: size of array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);

	return (i % size);
}
