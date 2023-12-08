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

	if (head == NULL || *head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	temp = NULL;
	return (1);
}
