#include "lists.h"

/**
 * add_dnodeint - add node to the beginning
 * of linked list
 *
 * @head: Head node
 * @n: data to be added to list
 * Return: Address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = (*head);
	temp->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = temp;

	(*head) = temp;

	return (*head);
}
