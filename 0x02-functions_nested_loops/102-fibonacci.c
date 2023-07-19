#include <stdio.h>

/**
 * main - print first 50 fibonacci number
 * Return: (0)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int j;

	printf("%d, ", a);
	for (j = 1 ; j < 50 ; j++)
	{
		printf("%d, ", b);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
