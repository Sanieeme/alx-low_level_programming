#include "main.h"
/**
 * binary_to_uint- function that converts a binary number to an unsigned int
 * @b: parameter
 * Return: value
 */

unsigned int binary_to_uint(const char *b)

{
	int i;

	unsigned int value = 0;

	if (b == NULL)
		return (0);

	For (i  =  0; b[i]; i++)
	{
		if (b[i] < ‘0’ || b[i] > ‘1’)
			return (0);
		value = 2 * value + (b[i] – ‘0’);
	}
		return (value);
}
	
