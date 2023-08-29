#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list
 * @head: pointer to node
 * @index: index of node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n_node = head;
	unsigned int n = 0;

	while (n_node && n < index)
	{
		n_node = n_node->next;
		n++;
	}
	return (NULL ? NULL : n_node);
}
