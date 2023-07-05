#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: This is my entry
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
