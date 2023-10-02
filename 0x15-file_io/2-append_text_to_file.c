#include "main.h"
/**
 * append_text_to_file - function that append s text at the end of a file
 * @filename: is the name of file
 * @text_content: text
 * Return: -1 or NULL or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, w, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			size++;
	}
	file = open(filename, O_WRONLY | O_APPEND);

	w = write(file, text_content, size);
	if (file == -1 || w == -1)
		return (-1);
	close(file);
	return (1);
}
