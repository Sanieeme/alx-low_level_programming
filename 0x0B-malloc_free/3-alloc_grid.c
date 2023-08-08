#include "main.h"

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: parameter
 * @height: parameter
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width == 0)
		return (NULL);
	if (height == 0)
		return (NULL);

	ar = (int **)malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			free(ar);
			for (j = 0 ; j <= height ; j++)
				free(ar[j]);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			ar[i][j] = 0;
	}
	return (ar);
}
