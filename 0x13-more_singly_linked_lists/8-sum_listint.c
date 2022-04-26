#include "lists.h"

/**
 * sum_listint - sum list
 *
 * @head: head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
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
