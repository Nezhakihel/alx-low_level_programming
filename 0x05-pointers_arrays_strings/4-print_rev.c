#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */

void print_rev(char *s)
{
	int len, j;

	for (len = 0; s[len] != '\0'; ++len);
        for (j = len - 1; j >= 0; j--)
        {
		printf("%c", s[j]);
        }
	printf("%s\n", s);
}
