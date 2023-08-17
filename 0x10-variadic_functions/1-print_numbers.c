#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string
 * @n: constant int
 * @...: parameters
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	if (separator == NULL)
		return;
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(num, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
