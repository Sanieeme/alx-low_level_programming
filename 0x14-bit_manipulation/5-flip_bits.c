#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: parameter
 * @m: parameter
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0;

	while (n > 0 || m > 0)
	{
		unsigned long int n1 = (n & 1);
		unsigned long int m2 = (m & 1);

		if (n1 != m2)
		{
			flip++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (flip);
}
