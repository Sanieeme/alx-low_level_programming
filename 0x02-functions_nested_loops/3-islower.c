#include "main.h"

/**
 * _islower - checks for lowercase alphabet
 * Return: 0 unless char is lowercase
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
