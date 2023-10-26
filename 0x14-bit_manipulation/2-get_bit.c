#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: parameter
 * @index: indexx
 * Return: index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)
		return (-1);

	num = (n >> index) & 1;
	return (num);
}
