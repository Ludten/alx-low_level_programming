#include "lists.h"

/**
 * print_dlistint - print elements of linked
 * list
 *
 * @h: Head node
 * Return: Length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;

	if (h == NULL)
		return (0);

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
