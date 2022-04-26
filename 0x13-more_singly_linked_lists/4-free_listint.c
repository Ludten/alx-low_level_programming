#include "lists.h"

/**
 * free_listint - free linked list
 *
 * @head: head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
