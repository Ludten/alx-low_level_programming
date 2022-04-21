#include "lists.h"

/**
 * print_list - print linked list elements
 *
 * @h: Head
 * Return: No. of elements
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *temp = h;

	if (h == NULL)
		return (0);

	i = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
