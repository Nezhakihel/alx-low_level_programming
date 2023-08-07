#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: text to write inside the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, count = 0;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd_open == -1)
		return (-1);
	while (*text_content++)
		count++;
	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, count);
		if (fd_write == -1)
			return (-1);
	}
	close(fd_open);
	return (1);
}
