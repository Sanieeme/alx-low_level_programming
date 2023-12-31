#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: paramenter
 * @index: parameter
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1Ul << index) | *n);
	return (1);
}
