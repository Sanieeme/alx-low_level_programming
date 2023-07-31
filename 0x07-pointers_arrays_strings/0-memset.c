#include "main.h"

/**
 * *_memset - function that fill the memory with constant bytes
 * @s:area filled with bytw
 * @b:constant bye
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);


}
