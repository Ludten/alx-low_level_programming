#include "hash_tables.h"

/**
 * hash_table_create - create a memory location
 * for the hash table
 *
 * @size: size of array
 * Return: Address of the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * table->size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
