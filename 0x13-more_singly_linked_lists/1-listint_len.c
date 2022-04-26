#include "lists.h"

/**
 * listint_len - return length of list
 *
 * @h: head
 * Return: Length
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
