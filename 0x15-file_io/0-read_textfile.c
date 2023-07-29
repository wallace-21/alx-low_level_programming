#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: file namme
 * @letters: letters
 * Return: num_of_bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file;
	ssize_t b_read;
	ssize_t b_written;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	b_read = read(file, buf, letters);
	b_written = write(STDOUT_FILENO, buf, b_read);

	free(buf);
	close(file);

	return (b_written);
}

