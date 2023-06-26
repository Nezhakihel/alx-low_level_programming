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

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
		if (i % 2 == 0)
			printf("%d", *(str + i));
	}
	printf("\n");
}
