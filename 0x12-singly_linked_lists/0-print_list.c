#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements
 * of a list_t list
 * @h: string
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (!h->next)
	{
		printf("[0](nil)\n");
	}
	while (h != NULL)
	{
		printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}
