#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string
 * @n: number of string
 * Return: NULL or string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	char *str;

	va_start(s, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(s, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
