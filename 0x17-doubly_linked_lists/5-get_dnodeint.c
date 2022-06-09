#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node
 * of the linked list
 *
 * @head: Head node
 * @index: index of node
 * Return: Address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;

	while (temp)
	{
		if (index == i)
			return (temp);
		i++;
		temp = temp->next;
	}

	return (NULL);
}
