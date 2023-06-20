#include "stdio.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char character;
	int i = 0;

	while (i < 10)
	{
		character = 'a';
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar('\n');
		i++;
	}
}

