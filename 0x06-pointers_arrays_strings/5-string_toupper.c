#include "main.h"
#include <stdio.h>

/**
 * string_toupper - all lowercase letters of a string to uppercase
 * @str: pointer
 * Return: str
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
