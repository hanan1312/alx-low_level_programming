#include "main.h"

/**
 * create_file - Creates a file.
 * @filename:  pointer.
 * @text_content: pointer
 * Return: -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = wr(op, text_content, i);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
