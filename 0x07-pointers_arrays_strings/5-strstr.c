#include "main.h"

/**
 * _strstr - function that locates substring
 * @haystack: parameter
 * @needle: parmeter
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	for ( ; *haystack != '\0' ; haystack++)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return ('\0');


}
