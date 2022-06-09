#include "lists.h"

/**
 * delete_dnodeint_at_index - delete data of the
 * nth node of the list
 *
 * @head: head
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	temp = *head;
	for (i = 1; i < index && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);
	deleteNode(head, temp);
	return (1);
}

/**
 * deleteNode - delete the node
 *
 * @head: head node
 * @del: node to be deleted
 */
void deleteNode(dlistint_t **head, dlistint_t *del)
{
	if (*head == NULL || del == NULL)
		return;
	if (*head == del)
		*head = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	free(del);
}
