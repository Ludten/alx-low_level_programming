#include "lists.h"

/**
 * insert_nodeint_at_index - add data to the
 * nth node of the list
 *
 * @head: head
 * @idx: index
 * @n: node data
 * Return: Address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1 = malloc(sizeof(listint_t));
	listint_t *temp2 = *head;
	unsigned int i;

	if (*head == NULL && idx > 0)
		return (NULL);
	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;

	if (idx == 0)
	{
		temp1->next = temp2;
		*head = temp1;
		return (temp1);
	}

	for (i = 0; temp2; i++)
	{
		if (i == idx - 1)
		{
			temp1->next = temp2->next;
			temp2->next = temp1;
			return (temp1);
		}
		temp2 = temp2->next;
	}

	free(temp1);
	return (NULL);
}
