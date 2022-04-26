#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of
 * the list
 *
 * @h: head
 * @idx: index
 * @n: node data
 * Return: Addressof new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1 = malloc(sizeof(listint_t));
	listint_t *temp2 = *head;
	unsigned int i;

	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;
	temp1->next = NULL;
	if (*head == NULL)
		return (NULL);

	i = 0;
	while (i < (idx - 1))
	{
		temp2 = temp2->next;
		if (temp2 == NULL)
			return (NULL);
		i++;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;

	return (temp1);
}
