#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0 successful
 */

int main(void)
{
	int n;

	if (n < 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is negative\n", n);
	return (0);
}

