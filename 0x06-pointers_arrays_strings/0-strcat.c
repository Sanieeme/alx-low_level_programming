#include "main.h"

/**
 * *_strcat - function that concatenates 2 strings
 * @dest: string
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0 ; src[i] != '\0' ; i++)
		slen++;
	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; i <= srclen ; i++)
		dest[destlen + i] = src[i];
}
