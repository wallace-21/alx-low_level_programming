#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: fiel name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int length;
	int b_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b_written = write(file, text_content, length);
	if (file == -1 || b_written == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
