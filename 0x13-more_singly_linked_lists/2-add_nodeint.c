#include "lists.h"
#include <string.h>
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head:
 * @n: 
 * Return: 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;
	char *str;
	size_t size;
	int i;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		size++;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}
