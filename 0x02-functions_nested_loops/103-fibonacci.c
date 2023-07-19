#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int f = 4000000;
	int a = 1;
	int b = 2;
	int c;
	int j = 2;

	while (c <= f)
	{
		c = a + b;
		if (j % 2 == 0)
			j = j + c;
		a = b;
		b = c;
	}
	printf("%d\n", j);
	return (0);
}
