#include <stdio.h>

/**
 * main - print first 50 fibonacci number
 * Return: (0)
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int j;

	printf("%lu, ", a);
	for (j = 1 ; j < 50 ; j++)
	{
		printf("%lu", b);
		c = a + b;
		a = b;
		b = c;
	}
	if (j != 49)
		printf("%lu, ", b);
	printf("\n");
	return (0);
}
