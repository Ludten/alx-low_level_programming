#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * of linked list
 *
 * @head: Head node
 * @n: data to be added to list
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = temp;
	temp->prev = last;
	return (temp);
}
