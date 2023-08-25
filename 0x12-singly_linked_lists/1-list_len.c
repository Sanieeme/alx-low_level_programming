#include "lists.h"
#include <stdio.h>
/**
 * list_len -  function that returns the number of elements
 * in a linked list_t list
 * @h:parameter
 * Return: numbder of elements
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
