#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of
 * the list
 *
 * @head: head
 * @index: index
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
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
