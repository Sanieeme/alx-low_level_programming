#include "lists.h"
/**
 * add_dnodeint_end - function that add a new node at the end of the list
 * @head: paramenter
 * @n: parmeter
 * Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL || head == NULL)
	{
		free(newnode);
		newnode = NULL;
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
