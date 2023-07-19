#include "main.h"
#include <stdio.h>

/**
 * print_times_table - print n times table
 * @n: parameter
 * Return: 0
 */

void print_times_table(int n)
{
	int i;

	if (n >= 0 && n <= 9)
	{
		for (i = n ; i <= 9 ; i++)
		{
			printf("%d, ", i);
			printf("\n");
		}
	}
	else if (n >= 0 && n <= 25)
	{
		for (i = n ; i <= 25 ; i++)
		{	printf("%d, ", i);
			printf("\n");
		}
	}
	else if (n >= 0 && n <= 144)
		for (i = n ; i <= 144 ; i++)
		{
			printf("%d, ", i);
			printf("\n");
		}
}
