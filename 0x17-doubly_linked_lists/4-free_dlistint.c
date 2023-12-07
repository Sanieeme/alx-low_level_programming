#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: parmenter
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;

	while (head)
	{
		newnode = head;
		head = head->next;
		free(newnode);
	}
}
