#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name: pointer
 * @f: pointer to function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	else
		f(name);
}
