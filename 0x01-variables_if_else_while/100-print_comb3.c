#include <stdio.h>

/**
 * main - determine combination of two digits
 * Return: 0 always
 */

int main(void)

{
	int i;

	for (i = 0 ; i < 90 ; i++)
		putchar(i % 10 + '0');

	return (0);
}
