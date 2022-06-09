#include "lists.h"

/**
 * free_dlistint - free linked list
 *
 * @head: Head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
