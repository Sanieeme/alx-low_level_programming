#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - print alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
