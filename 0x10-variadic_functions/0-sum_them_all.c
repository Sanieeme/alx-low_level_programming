#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: contant parameter
 * @...: parameters
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
