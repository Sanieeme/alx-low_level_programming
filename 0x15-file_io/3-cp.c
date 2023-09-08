#include "main.h"
#define BUF_SIZE 1024
/**
 * main - programs that copy content of one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int f1, f2, r1, r2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file _to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	f2 = open(argv[1], O_RDONLY);
	error_98(f2, buffer, argv[1]);

	f1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(f1, buffer, argv[2]);

	do

	{
		r1 = read(f2, buffer, BUF_SIZE);
		if (r1 == 0)
			break;
		error_98(r1, buffer, argv[1]);

		r2 = write(f1, buffer, r1);
		error_99(r2, buffer, argv[2]);
	} while (r2 >= BUF_SIZE);
	r1 = close(f1);
	error_100(r1, buffer);
	r2 = close(f2);
	error_100(r1, buffer);
	free(buffer);
	return (0);
}
/**
 * error_98 - function that checks error at 98
 * @f1: parameter
 * @buffer: buffer
 * @argv: argument vector
 */
void error_98(int f1, char *buffer, char *argv)
{
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}
/**
 * error_99 - function that checks error at 99
 * @f1: parameter
 * @buffer: buffer
 * @argv: argument vector
 */
void error_99(int f1, char *buffer, char *argv)
{
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * error_100 - function that checks error at 100
 * @f1: parameter
 * @buffer: buffer
 */
void error_100(int f1, char *buffer)
{
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %i\n", f1);
		free(buffer);
		exit(100);
	}
}
