#include <stdio.h>

/**
 *main- this is the function
 *Return: 0 on success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %lu bytes\n", (unsigned long)sizeof(a));
	printf("size of int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu bytes\n", (unsigned long)sizeof(e));
	return (0);
}
