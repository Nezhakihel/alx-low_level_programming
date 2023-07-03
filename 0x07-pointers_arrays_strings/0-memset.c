#include <stdio.h>
#include "main.h"

/**
 * _memset - function fills the first n bytes
 * of the memory area pointed to by s with the constant byte b
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	}
	return (s);
}
