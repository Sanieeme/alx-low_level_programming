#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: 0 always
 */

void print_alphabet_x10(void)
{
	char i, c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}

}
