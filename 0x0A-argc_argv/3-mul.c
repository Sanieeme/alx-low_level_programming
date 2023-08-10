#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}