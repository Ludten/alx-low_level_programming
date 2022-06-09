#include "lists.h"

/**
 * insert_dnodeint_at_index - add data to the
 * nth node of the list
 *
 * @h: head node
 * @idx: index
 * @n: node data
 * Return: Address of temp1 node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1 = NULL, *temp2 = *h;

	while (temp2 && idx > 0)
		temp2 = temp2->next, idx--;

	if (idx == 0 && temp2 != NULL)
	{
		temp1 = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (temp1 == NULL)
			return (NULL);

		temp1->n = n, temp1->prev = NULL, temp1->next = NULL;

		(temp2->prev)->next = temp1;
		temp1->prev = temp2->prev;
		temp1->next = temp2;
		temp2->prev = temp1;
	}
	return (temp1);
}
