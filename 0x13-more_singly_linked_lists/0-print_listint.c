#include "lists.h"

/**
 * print_listint - print list
 *
 * @h: head
 * Return: Length
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}
