#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;
	int l = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		l++;
	return (l);
}
