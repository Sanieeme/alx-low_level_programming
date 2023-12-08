#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of dlistint_t
 * @head: parameter
 * @index: parameter
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	temp = NULL;
	return (1);
}
