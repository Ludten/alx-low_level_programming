#include "lists.h"

/**
 * free_listint2 - free linked list
 *
 * @head: head
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	if ((*head)->next)
		free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
