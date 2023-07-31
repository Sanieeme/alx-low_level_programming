#include "main.h"

/**
 * _strpbrk - function that searches a string of any set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s != '\0')
	{
		for (c = 0 ; accept[c] ; c++)
		{
		if (*s == accept[c])
			return (s);
		}
		s++;
	}
	return (NULL);
}
