#include "hash_tables.h"

/**
 * hash_table_get - get value of table key
 *
 * @ht: table
 * @key: Key
 * Return: address of key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr_item;

	if (!ht || !ht->array || !key || (strlen(key) == 0))
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	curr_item = ht->array[idx];

	while (curr_item != NULL)
	{
		if (strcmp(curr_item->key, key) == 0)
			return (curr_item->value);
		curr_item = curr_item->next;
	}
	return (NULL);
}
