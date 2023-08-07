#include "main.h"

/**
 * *str_concat -  function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		len1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2) + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		s3[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		s3[len1 + i] = s2[i];

	return (s3);
}
