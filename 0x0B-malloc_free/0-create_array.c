#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array chars,initializ it with a specific char
 * @size: size
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;
	/* */
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i < size)
			{
				p[i] = c;
				i++;
			}
			return (p);
		}
	}
}
