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
	int length_str = 0;
	/* */
	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
			length_s1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			j++;
			length_s2++;
		}
	}
	length_str = (length_s1 + length_s2) + 1;
	str = (char *)malloc(length_str * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < length_s1; i++)
		str[i] = s1[i];
	for (j = 0; j < length_s2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	/* */
	return (str);
}
