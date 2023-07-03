#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area where we past
 * @src: memory area to copy
 * @n: bytes
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
