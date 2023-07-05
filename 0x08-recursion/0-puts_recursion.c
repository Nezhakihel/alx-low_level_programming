#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string
 * s: pointer contains string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	s++;
	_puts_recursion(s);
}
