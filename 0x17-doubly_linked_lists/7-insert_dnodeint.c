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
	dlistint_t *temp1, *next, *temp2;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp2 = *h;
		for (i = 0; i < idx - 1 && temp2 != NULL; i++)
			temp2 = temp2->next;
		if (temp2 == NULL)
			return (NULL);
	}
	temp1 = malloc(sizeof(dlistint_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = temp1;
		temp1->prev = NULL;
	}
	else
	{
		temp1->prev = temp2;
		next = temp2->next;
		temp2->next = temp1;
	}
	temp1->next = next;
	if (temp1->next != NULL)
		temp1->next->prev = temp1;
	return (temp1);
}
