#include <stdio.h>

/**
 *main- this is the function
 *Return: 0
 */

int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("Size of long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n" sizeof(float));

	return (0);
}
