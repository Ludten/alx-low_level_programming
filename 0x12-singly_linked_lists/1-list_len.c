#include "lists.h"

/**
 * list_len - list no. of linked list elements
 *
 * @h: Head
 * Return: No. of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *temp = h;

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
