#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of a file
 * @text_content: content
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int files, wrts, i, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			size++;
	}
	files = open(filename, O_WRONLY | O_APPEND);
	wrts = write(files, text_content, size);
	if (files == -1 || wrts == -1)
		return (-1);
	close(files);
	return (1);
}
