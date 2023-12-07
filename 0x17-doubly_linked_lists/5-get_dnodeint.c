#include "lists.h"
/**
 * get_dnodeint_at_index - functions that returns the nthnode of a dlistint_t
 * @head: parameter
 * @index: parameter
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *newnode;
	unsigned int i = 0;
	newnode = head;

	while (newnode && i < index)
	{
		newnode = newnode->next;
		i++;
	}
	return (NULL ? NULL : newnode);
}
