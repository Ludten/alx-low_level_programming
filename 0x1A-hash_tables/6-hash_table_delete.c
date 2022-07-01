#include "hash_tables.h"

/**
 * hash_table_delete - delete table
 *
 * @ht: table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht || !ht->array)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			free_list(temp);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - free linked list
 *
 * @head: head
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}
