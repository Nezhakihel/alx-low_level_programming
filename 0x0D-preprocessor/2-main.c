#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * followed by a new line
 * Return: Nothing
 */

void main(void)
{
	printf("%s\n", __FILE__);
}
