#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: string in question
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= sizeof(str); i = i + 1)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
