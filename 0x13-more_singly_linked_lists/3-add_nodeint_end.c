#include "lists.h"

/**
 * add_nodeint_end - add node to start of list
 *
 * @head: head
 * @n: data to be added
 * Return: Address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1 = malloc(sizeof(listint_t));
	listint_t *temp2 = *head;

	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;
	temp1->next = NULL;
	if (*head == NULL)
	{
		*head = temp1;
		return (*head);
	}

	while (temp2->next != NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp1;

	return (*head);
}
