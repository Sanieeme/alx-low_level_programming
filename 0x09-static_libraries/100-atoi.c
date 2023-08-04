#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0, j = 0, n = 0, len = 0, k = 0, d = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && k == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
				d = -d;
			n = n * 10 + d;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}
	if (k == 0)
		return (0);
	return (n);
}

