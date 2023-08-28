#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: constant
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
