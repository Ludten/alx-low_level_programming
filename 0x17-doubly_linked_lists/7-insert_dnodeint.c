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
	unsigned int i;
	dlistint_t *temp1, *temp2;

	if (*h == NULL && idx > 0)
		return (NULL);
	temp1 = malloc(sizeof(dlistint_t));
	if (temp1 == NULL)
		return (NULL);
	temp2 = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; temp2 && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp2->next == NULL)
				return (add_dnodeint_end(h, n));
			temp1->next = temp2->next;
			temp1->prev = temp2;
			temp2->next->prev = temp1;
			temp2->next = temp1;
			return (temp1);
		}
		else
			temp2 = temp2->next;
	}
	return (NULL);
}
