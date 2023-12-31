#include "lists.h"
#include <string.h>
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head: parameter
 * @n: parameter
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
