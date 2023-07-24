#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: string
 * @n: parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - i)
			printf(", ");
	}
	printf("\n");
}
