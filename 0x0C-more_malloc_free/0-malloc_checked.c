#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	else
		return (num);
}
