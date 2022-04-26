#include "lists.h"

/**
 * delete_nodeint_at_index - delete data of the
 * nth node of the list
 *
 * @head: head
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
		return (1);
	}

	temp1 = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp1->next == NULL)
			return (-1);
		temp1 = temp1->next;
	}
	temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	return (1);
}
