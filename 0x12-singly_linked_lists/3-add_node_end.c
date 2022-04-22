#include "lists.h"

/**
 * add_node_end - add node to end of list
 *
 * @head: head
 * @str: String
 * Return: element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp1 = malloc(sizeof(list_t));
	list_t *temp2 = *head;

	if (temp1 == NULL)
		return (NULL);
	temp1->str = strdup(str);
	temp1->len = strlen(str);
	temp1->next = NULL;

	if (*head == NULL)
	{
		*head = temp1;
		return (*head);
	}

	while (temp2->next != NULL)
		temp2 = temp2->next;
	temp2->next = temp1;

	return (*head);
}
