#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: parameter
 * Retuen: void
 */
void puts_half(char *str)
{
	int i, j = 0, n;

	for (i = 0 ; str[i] != '\0' ; i++)
		j++;
	n = (j - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');

}

