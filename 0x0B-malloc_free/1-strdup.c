#include "main.h"

/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: copy of string
 * Return: pointer to the duplicate string or NULL
 */
char *_strdup(char *str)
{
	int num = 0;
	char *c;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		num++;

	c = malloc(sizeof(char) * num + 1);

	if (c == 0)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		c[i] = str[i];
	return (c);
}
