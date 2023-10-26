#include "main.h"
/**
 * get_endianness - function that checks endianness
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	return (*c);
}
