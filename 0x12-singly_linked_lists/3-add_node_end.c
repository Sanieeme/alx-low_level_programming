#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: parameter
 * @str: parameter
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *temp;
	size_t n, size = 0;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	for (n = 0; str[n] != '\0'; n++)
		size++;
	n_node->len = size;
	n_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = n_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = n_node;
	}

	return (*head);
}
