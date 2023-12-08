#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->n = n;
			newnode->prev = temp;
			newnode->next = temp->next;
			temp->next->prev = newnode;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
