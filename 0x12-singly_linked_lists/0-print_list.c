#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - function that prints all the elements
 * of a list_t list
 * @h: string
 * Return: number of node
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}
