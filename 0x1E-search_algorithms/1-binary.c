#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size:  number of elements
 * @value: value to search
 * Return: -1  or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, k, i = 0;
	size_t j = size - 1;

	while (i <= j)
	{
		k = i + (j - i) / 2;
		printf("Searching in array: ");
		for (l = i; l <= j; l++)
		{
			printf("%d", array[l]);
			if (l < j)
				printf(", ");
		}
		printf("\n");
		if (array[k] == value)
		{
			return (k);
		}
		if (array[k] < value)
		{
			i = k + 1;
		}
		else
		{
			j = k - 1;
		}
	}
	return (-1);
}
