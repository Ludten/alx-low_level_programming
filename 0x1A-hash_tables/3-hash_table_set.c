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

	elem = create_item(key, value);
	idx = key_index((unsigned char *)key, ht->size);

	curr_item = ht->array[idx];
	if (check_key(curr_item, key))
	{
		replace(curr_item, elem);
		return (1);
	}
	add_node(&curr_item, elem);
	if (curr_item == NULL)
		return (0);

	return (1);

}

/**
 * create_item - Create a item object
 *
 * @key: Key
 * @value: Value
 * Return: Address of item added
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = strdup(key);
	item->value = strdup(value);

	return (item);
}

/**
 * add_node - add elements to the start of
 * the node
 *
 * @head: head
 * @item: item address
 * Return: Address
 */
hash_node_t *add_node(hash_node_t **head, hash_node_t *item)
{
	hash_node_t *temp = malloc(sizeof(hash_node_t));

	if (temp == NULL)
		return (NULL);

	temp->key = strdup(item->key);
	temp->value = strdup(item->value);

	if (*head == NULL)
	{
		*head = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
		*head = temp;
	}

	return (*head);
}
