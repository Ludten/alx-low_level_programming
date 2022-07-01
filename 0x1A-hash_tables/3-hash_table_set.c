#include "hash_tables.h"

/**
 * hash_table_set - set an item in the
 * hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *elem, *curr_item;

	if (!ht || !strcmp(key, "") || !key)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	curr_item = ht->array[idx];
	while (curr_item != NULL)
	{
		if (strcmp(curr_item->key, key) == 0)
		{
			free(curr_item->value);
			curr_item->value = strdup(value);
			return (1);
		}
		curr_item = curr_item->next;
	}
	curr_item = ht->array[idx];
	elem = malloc(sizeof(hash_node_t));
	if (elem == NULL)
		return (0);
	elem->key = strdup(key);
	elem->value = strdup(value);
	elem->next = curr_item;
	ht->array[idx] = curr_item;

	return (1);
}
