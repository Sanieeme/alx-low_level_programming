#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc -  function that allocates memory for an array, using malloc
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = calloc(size, nmemb);

	if (ptr == NULL)
	       return(NULL);
	return (ptr);
}
