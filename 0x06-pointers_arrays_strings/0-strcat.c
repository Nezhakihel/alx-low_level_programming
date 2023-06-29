#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * @dest : input value / 1st string
 * @src  : input value / 2nd string
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	/* variable i store size of dest */
	int i = 0;
	/* variable j store size of src */
	int j = 0;

	/* while dest is not null i++ */
	while (dest[i] != '\0')
	{
		i++;
	}
	/* while src is not null add src to dest and j++ */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
