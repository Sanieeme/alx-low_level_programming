#include "main.h"

/**
 * _strstr - function that locates substring
 * @haystack: parameter
 * @needle: parmeter
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				(needle[i + 1] == '\0')

					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
