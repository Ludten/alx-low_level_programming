#include "lists.h"

/**
 * dlistint_len - get number of elements
 * of linked list
 *
 * @h: Head node
 * Return: Length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
