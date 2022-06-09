#include "lists.h"

/**
 * insert_dnodeint_at_index - add data to the
 * nth node of the list
 *
 * @h: head node
 * @idx: index
 * @n: node data
 * Return: Address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *last, *temp1, *temp2;

	if (*h == NULL && idx > 0)
		return (NULL);

	last = *h;
	temp2 = last;
	i = 1;
	while (i < idx - 1 && temp2 != NULL)
	{
		temp2 = temp2->next;
		i++;
	}
	if (idx == 1)
	{
		return (add_dnodeint(h, n));
	}
	else if (temp2 == *h)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (temp2 != NULL)
	{
		temp1 = malloc(sizeof(dlistint_t));
		if (temp1 == NULL)
			return (NULL);
		temp1->n = n;
		temp1->next = temp2->next;
		temp1->prev = temp2;
		if (temp2->next != NULL)
			temp2->next->prev = temp1;
		temp2->next = temp1;
	}
	return (temp1);
}
