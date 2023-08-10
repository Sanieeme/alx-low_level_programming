#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * @n: parameter
 * Return: NULL or pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s2 == NULL)
		return (" ");
	if (s1 == NULL)
		return (" ");
	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		len2++;

	s3 = malloc(sizeof(char *) * (len1 + n) + 1);

	if (s3 == NULL)
		return (NULL);
	if (n >= len2)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			s3[i] = s1[i];
		for (i = 0 ; s2[i] != '\0' ; i++)
			s3[len1 + i] = s2[i];
		s3[len1 + i] = '\0';
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			s3[i] = s1[i];
		for (i = 0 ; i < n ; i++)
			s3[len1 + i] = s2[i];
		s3[len1 + i] = '\0';
	}
	return (s3);
}
