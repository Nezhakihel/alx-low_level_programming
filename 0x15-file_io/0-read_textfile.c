#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to char
 * @letters : number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * .......... or 0 if Error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor_open, file_descriptor_read, fd_write;
	char *buffer_letters;
	/* if filename is NULL return 0 */
	if (filename == NULL)
		return (0);
	/* open the file */
	file_descriptor_open = open(filename, O_RDONLY);
	/* if file can not open return 0*/
	if (file_descriptor_open == -1)
		return (0);
	/* declare malloc */
	buffer_letters = malloc(sizeof(char) * letters);
	/* if malloc error */
	if (buffer_letters == NULL)
		return (0);
	/* read the file */
	file_descriptor_read = read(file_descriptor_open, buffer_letters, letters);
	/* if file can not read */
	if (file_descriptor_read == -1)
	{
		free(buffer_letters);
		return (0);
	}
	/* write the file */
	fd_write = write(STDOUT_FILENO, buffer_letters, file_descriptor_read);
	/* if file can not be written */
	if (fd_write == -1)
	{
		free(buffer_letters);
		return (0);
	}
	/* close file */
	close(file_descriptor_open);
	free(buffer_letters);
	return (fd_write);
}
