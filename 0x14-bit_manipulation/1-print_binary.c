#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in bínary
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int i, size = 0;

	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (current & 1)
		{
			_putchar ('1');
			size++;
		}
		else  if (size)
			_putchar ('0');
	}
	if (!size)
		_putchar ('0');
}
