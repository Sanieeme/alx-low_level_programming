#include <stdio.h>

/**
 *main- this is the function
 *Return: 0 on success
 */

int main(void)
{
	printf("Size of char: %zu bytes", sizeof(char));
	printf("size of int: %zu bytes", sizeof(int));
	printf("Size of long int: %zu bytes", sizeof(long int));
	printf("Size of long long int: %zu bytes", sizeof(long long int));
	printf("Size of float: %zu bytes", sizeof(float));
	return (0);
}
