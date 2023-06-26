#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */

void print_rev(char *s)
{
	int len = strlen(s);
	char s_reverse[len];
	int j = 0;
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		s_reverse[j] = s[i];
		j++;
	}
	s  = s_reverse;
	printf("%s\n", s_reverse);
}
