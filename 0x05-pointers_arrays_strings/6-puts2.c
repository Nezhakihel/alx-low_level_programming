#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: string in question
 *
 * Return: void
 */

void puts2(char *str)
{
	int a = 0, b, c;
	char d;

	while (str[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = str[b];
		str[b] = s[trc];
		str[c] = d;
	}
}
