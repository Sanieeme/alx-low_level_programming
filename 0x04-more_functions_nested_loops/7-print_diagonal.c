#include "main.h"

/**
 * print_diagonal - draws diagonal lines in the terminal
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('\');
		_putchar('\n')
	}
}
