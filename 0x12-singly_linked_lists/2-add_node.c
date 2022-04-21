#include "lists.h"

/**
 * add_node - add elements to the start of
 * the node
 *
 * @head: head
 * @str: string to add
 * Return: Address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);

	if (*head != NULL)
		temp->next = *head;
	*head = temp;

	return (*head);
}
