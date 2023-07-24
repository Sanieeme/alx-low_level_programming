#include "main.h"

/**
 * _puts - fuction that prints a string
 * @str: string
 * Return: void
 */
void print_rev(char *s);
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		_putchar(s[i]);
	_putchar('\n');
}
