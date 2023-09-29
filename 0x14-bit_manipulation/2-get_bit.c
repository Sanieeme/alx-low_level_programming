#include "main.h"
/**
 * get_bit - function that returns the value of bit
 * @n: parameter
 * @index: parameter
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n > index) & 1;
	return (value);
}
