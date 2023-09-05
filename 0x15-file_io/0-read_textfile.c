#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer.
 * @letters: number of letters the
 * Return: 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(o, buf, letters);
	write = write(STDOUT_FILENO, buf, r);

	if (open == -1 || read == -1 || write == -1 || write != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(open);

	return (write);
}
