#include "main.h"
/**
 * flip_bits returns the number of bits to flip
 * @n: parameter
 * #m: parameter
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, size = 0;
	unsigned long int value;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		value = exclusive >> 1;
		if (value & 1)
			size++;
	}
	return (size);
}
