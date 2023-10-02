#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the P0SIX standard output
 * @filename: pointer
 * @letters: number of letters to be printed
 * Return: letters numbers or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t file;
	ssize_t c;
	ssize_t i;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	ch = malloc(sizeof(char) * letters);
	c = read(file, ch, letters);
	i = write(STDOUT_FILENO, ch, c);

	free(ch);
	close(file);
	return (i);
}
