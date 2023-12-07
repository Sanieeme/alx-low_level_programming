#include "lists.h"
/**
 * sum_dlistint - sum of all data of a dlistint_t
 * @head: parameter
 * Return: sum of all data or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int num = 0;
	dlistint_t *newnode;

	newnode = head;
	while (newnode)
	{
		num = num + newnode->n;
		newnode = newnode->next;
	}
	return (num);
}
