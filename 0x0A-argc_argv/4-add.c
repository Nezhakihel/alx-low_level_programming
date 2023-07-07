#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Write a program that adds positive numbers
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If are not digits print Error followed by a new line & return 1
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success ,1 if not
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	result = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					continue;
				} else
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	} else
		printf("0\n");
	return (0);
}
