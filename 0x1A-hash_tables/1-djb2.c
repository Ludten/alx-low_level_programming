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
 * check_key - checks if a key exists in a hash table
 *
 * @table: table
 * @key: key
 *
 * Return: 1 or 0
 */
int check_key(hash_node_t *table, const char *key)
{
	while (table)
	{
		if (strcmp(table->key, key) == 0)
			return (1);
		table = table->next;
	}

	return (0);
}

/**
 * replace - replaces the key value
 *
 * @table: table
 * @item: new element
 */
void replace(hash_node_t *table, hash_node_t *item)
{
	hash_node_t *temp = table;

	while (temp && (strcmp(temp->key, item->key) != 0))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(item->value);
}
