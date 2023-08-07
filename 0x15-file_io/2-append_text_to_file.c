#include "main.h"

/**
 * append_text_to_file - This function adds text at EOF
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on err
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, fd_write = 0, i = 0;
	/**/
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		fd_write = write(fild, text_content, i);
		if (fd_write < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
