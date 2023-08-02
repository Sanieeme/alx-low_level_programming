#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - function that returns the length of the string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{

	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
