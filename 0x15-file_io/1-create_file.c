#include "main.h"
/**
 * create_file - finction that creates a file
 * @filename: filename to be created
 * @text_content: content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, j, w, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (j = 0; text_content[j] != '\0'; j++)
			size++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file, text_content, size);
	if (file == -1)
		return (-1);
	else if (w == -1)
		return (-1);
	close(file);
	return (1);
}
