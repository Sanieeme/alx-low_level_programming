#include "main.h"

/**
 * _isupper - checks if c is the uppercase character
 * @c: parameter
 * Returns: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
