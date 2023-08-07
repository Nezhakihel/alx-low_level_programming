#include "main.h"

/**
 * create_buffer - function that allocates memory for the buffer
 * @file: file
 * Return: buffer
 */

char *create_buffer(char *file)
{
	char *buffer;
	/* Use the BUFSIZE constant instead of hard-coding the size */
	buffer = malloc(BUFSIZE);
	/* Check if the allocation was successful */
	if (buffer == NULL)
	{
		/* Use perror to print the error message */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int c;
	/* Use the close function and check for errors */
	c = close(fd);
	if (c == -1)
	{
		/* Use perror to print the error message */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description
 * if the number of argument is not the correct one, exit with code 97
 * if file_from does not exist, or if you can not read it, exit with code 98
 * if you can not create or if write to file_to fails, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	/* Check if the number of arguments is correct */
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
