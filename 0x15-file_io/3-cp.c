#include "main.h"
#define BUF_SIZE 1024
/**
 * main - program that copies the content of a file to another file
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	int file1, file2, r1, r2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);
	file2 = open(argv[1], O_RDONLY);
	error_98(file2, buffer, argv[1]);

	file1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(file1, buffer, argv[2]);
	do

	{
		r1 = read(file2, buffer, BUF_SIZE);
		if (r1 == 0)
			break;
		error_98(r1, buffer, argv[1]);
		r2 = write(file1, buffer, r1);
		error_99(r2, buffer, argv[2]);
	} while (r2 >= BUF_SIZE);
	r1 = close(file1);
	error_100(r1, buffer);
	r1 = close(file2);
	error_100(r1, buffer);
	free(buffer);
	return (0);
}
/**
 * error_98 - function that checks error at 98
 * @file1: parameter
 * @buffer: parameter
 * @argv: arg vector
 */
void error_98(int file1, char *buffer, char *argv)
{
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}
/**
 * error_99 - function that checks error at 99
 * @file1: parameter
 * @buffer: parameter
 * @argv: arg vector
 */
void error_99(int file1, char *buffer, char *argv)
{
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * error_100 - function that checks error at 100
 * @file1: parameter
 * @buffer: parameter
 */
void error_100(int file1, char *buffer)
{
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		free(buffer);
		exit(100);
	}
}
