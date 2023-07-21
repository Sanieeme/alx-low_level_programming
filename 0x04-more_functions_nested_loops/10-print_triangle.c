#include "main.h"

/**
 * print_triangle - print triangle
 * @size: pararmeter
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, l;

		for (i = 0 ; i <= size ; i++)
		{
			for (j = size - i ; j >= 1 ; j--)
				_putchar(' ');
		}
		for (l = 1 ; l <= i ; l++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
