#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer or null if the character is not found
 */

char *_strchr(char *s, char c)
{
	int success = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			success = 1;
			break;
		}
		s++;
	}
	if (success == 0)
		return (NULL);
	else
		return (s);
}
