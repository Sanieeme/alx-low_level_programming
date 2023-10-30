#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POXI starndard output
 * @filename: name of a file
 * @letters: number of letters
 * Return: number of letters it could be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t files, rds, wrts;

	files = open(filename, O_RDONLY);
	if (files == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	rds = read(files, str, letters);
	wrts = write(STDOUT_FILENO, str, rds);

	free(str);
	close(files);
	return (wrts);
}
