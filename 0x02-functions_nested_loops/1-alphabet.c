#include "main.h"
#include <unistd.h>

/**
 * main - print alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
