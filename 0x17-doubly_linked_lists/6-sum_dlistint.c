#include "lists.h"

/**
 * sum_dlistint - sum up all elements of
 * linked list
 *
 * @head: Head node
 * Return: sum of elements in list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum, i;

	if (head == NULL)
		return (0);

	sum = 0;
	i = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
		i++;
	}

	return (sum);
}
