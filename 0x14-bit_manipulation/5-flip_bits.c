#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: parameter
 * @m: pararmeter
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, size = 0;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
		value = (n ^ m) >> i;
		if (value & 1)
			size++;
	}
	return (size);
}
