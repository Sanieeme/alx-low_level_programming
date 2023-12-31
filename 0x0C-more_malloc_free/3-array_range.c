#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @min: parameter
 * @max: parameter
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	ar = malloc(sizeof(int) * j);

	if (ar == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++)
		ar[i] = min++;

	return (ar);
}
