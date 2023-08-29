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
	
	listint_t *e_node = malloc(sizeof(listint_t));
	e_node->next = NULL;

	index--;
	while (index != 1)
	{
		n_node = n_node->next;
		index--;
	}
	e_node->next = n_node->next;
	n_node->next = e_node;
	return (n_node);
}
