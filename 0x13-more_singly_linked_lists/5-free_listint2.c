#include "lists.h"

/**
 * free_listint2 - free linked list
 *
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
