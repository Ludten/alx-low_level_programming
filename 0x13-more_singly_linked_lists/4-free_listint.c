#include "lists.h"

/**
 * free_listint - free linked list
 *
 * @head: head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return (NULL);
	if (head->next)
		free_listint(head->next);
	free(head);
}
