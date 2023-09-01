#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: parameter
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary;
	int i, size = 0;

	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			size++;
		}
		else if (size)
			_putchar('0');
	}
	if (!size)
		_putchar('0');
}
