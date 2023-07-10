#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str  : string
 * Return: a pointer to a new string which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	/* calculate the length of str */
	int size = 0;
	int i = 0;
	char *p;

	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	size++;
	/* declare p pointer to return */
	p = malloc(size * sizeof(char));

	/* copy str in p */
	if (p != NULL &  size != 1)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = str[i];
		}
		p[i] = '\0';
		return (p);
	}
	else
		return (NULL);
}
