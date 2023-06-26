#include "main.h"

/**
 * swap_int - swap value of two integer
 * @a: var 1
 * @b: var 2
 * Return: the result
 */

void swap_int(int *a, int *b)
{
	/* c: to store variable a */
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
