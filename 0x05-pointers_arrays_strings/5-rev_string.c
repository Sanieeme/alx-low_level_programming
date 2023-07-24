#include "main.h"

/**
 * rev_string - function that reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j = 0;
	char c;

	for (i = 0 ; s[i] != '\0' ; i++)
		j++;
	for (i = 0 ; i < j / 2 ; i++)
	{
		c = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = c;
	}

}
