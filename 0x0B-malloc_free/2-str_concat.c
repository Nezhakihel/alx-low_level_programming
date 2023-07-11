#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1 : string 1
 * @s2 : string 2
 * Return: s1 + s2 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0;
	int j = 0;
	int length_s1 = 0;
	int length_s2 = 0;
	/* */
	if ((*s1 == 0) && (*s2 == 0))
		return (NULL);
	while (*s1 != '\0')
	{
		s1++;
		length_s1++;
	}
	while (*s2 != '\0')
	{
		s2++;
		length_s2++;
	}
	length_str = (length_s1 + length_s2) + 1;
	str = malloc(length_s1 * sizeof(char));
	if (str == 0)
		return (NULL);
	for (i = 0; i < length_s1; i++)
		str[i] = s1[i];
	for (j = 0; j < length_s2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
