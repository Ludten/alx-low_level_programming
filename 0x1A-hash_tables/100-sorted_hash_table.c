#include "hash_tables.h"

/**
 * shash_table_create - create a memory location
 * for the hash table
 *
 * @size: size of array
 * Return: Address of the table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * insert_shash_node - Inserts a hash node into a \
 * hash table's sorted list.
 * @ht: The hash table.
 * @hn: The hash node to be inserted.
 */
void insert_shash_node(shash_table_t *ht, shash_node_t *hn)
{
	shash_node_t *next = NULL, *prev = NULL;

	if ((ht != NULL) && (hn != NULL))
	{
		next = ht->shead;
		while (next != NULL)
		{
			if (strcmp(next->key, hn->key) < 0)
				prev = next, next = next->snext;
			else
				break;
		}
		if (next != NULL)
			next->sprev = hn;
		if (prev != NULL)
		{
			prev->snext = hn;
			hn->sprev = prev;
			hn->snext = next;
			if (next == NULL)
				ht->stail = hn;
		}
		else
		{
			hn->sprev = NULL;
			hn->snext = next;
			ht->shead = hn;
			if (ht->stail == NULL)
				ht->stail = hn;
		}
	}
}

/**
 * shash_table_set - Adds an element to a given sorted hash table.
 * @ht: The sorted hash table that will contain the element.
 * @key: The key of the element to add.
 * @value: The value of the element to add.
 *
 * Return: 1 if the addition was successful, otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long idx;
	shash_node_t *tmp = NULL, *new_node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idx = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp = ht->array[idx];
		new_node = malloc(sizeof(shash_node_t));
		if (new_node != NULL)
		{
			new_node->key = strdup(key);
			new_node->value = strdup(value);
			new_node->next = tmp;
			ht->array[idx] = new_node;
			insert_shash_node(ht, new_node);
			return (1);
		}
	}
	return (0);
}

/**
 * shash_table_get - Retrieves the value of an element with a given \
 * key in a sorted hash table.
 * @ht: The sorted hash table to search.
 * @key: The element's key.
 *
 * Return: The value of the element associated with the given \
 * key, otherwise NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long idx;
	shash_node_t *node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idx = key_index((unsigned char *)key, ht->size);
		node = ht->array[idx];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}

/**
 * shash_table_print - print the hash table
 *
 * @ht: table
 */
void shash_table_print(const shash_table_t *ht)
{
	const shash_node_t *temp;
	char *comma;

	if (!ht || !ht->array)
		return;

	temp = ht->shead;
	comma = "";
	printf("{");
	while (temp != NULL)
	{
		printf("%s'%s': '%s'", comma, temp->key, temp->value);
		comma = ", ";
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash table in reverse
 *
 * @ht: table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	const shash_node_t *temp;
	char *comma;

	if (!ht || !ht->array || !ht->shead)
		return;

	temp = ht->stail;
	comma = "";
	printf("{");
	while (temp != NULL)
	{
		printf("%s'%s': '%s'", comma, temp->key, temp->value);
		comma = ", ";
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table and its elements.
 * @ht: A pointer to the hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node = NULL, *tmp = NULL;
	unsigned long i;

	if ((ht != NULL) && (ht->array != NULL))
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				if (node->key != NULL)
					free(node->key);
				if (node->value != NULL)
					free(node->value);
				free(node);
				node = tmp;
			}
		}
		if (ht->array != NULL)
			free(ht->array);
		free(ht);
		ht = NULL;
	}
}
