#include "main.h"

/**
 * print_rev - fuction that prints a string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int l = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		i++;
	for (i = l - 1 ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
