#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: parameter
 * Return: void
 */
void free_list(list_t *head)
{
	head = malloc(sizeof(size_t));
	free(head);
}
