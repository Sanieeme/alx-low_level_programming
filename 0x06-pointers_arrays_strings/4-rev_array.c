#include "main.h"

/**
 * reverse_array - reverse the content
 * @a: parameter
 * @n: parameter
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n-- ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
