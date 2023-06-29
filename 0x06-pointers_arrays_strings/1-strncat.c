#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest : input value 1st string
 * @src  : input value 2nd string
 * @n    : input value nb of bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
