#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: void when successful
 */
int main(int argc, char *argv[])
{
	int i, j, num = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(argv[i]);
	}
	printf("%d\n", num);
	return (0);
}
