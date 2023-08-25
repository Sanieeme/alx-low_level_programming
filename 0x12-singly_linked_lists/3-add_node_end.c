#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: parameter
 * @str: parameter
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t size = 0;

	str = head;

	str = malloc(sizeof(list_t));
	head->str = str;
	head->next = NULL;
	while(str)
	{
		head = head->str;
	}
	return (next);
}
