#include "main.h"

/**
 * _strstr - function that locates substring
 * @haystack: parameter
 * @needle: parmeter
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		if (*haystack == *needle)
			return (needle);
		haystack++;
	}
	if (*haystack == *needle)
		return (needle);
	return (NULL);


}
