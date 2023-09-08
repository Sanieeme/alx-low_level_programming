#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number of
 * @index: value of bits
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	else
		return ((n & (1 << index)) != 0);
}