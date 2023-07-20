#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: nb of varaible
 * Return: sum or 0 if fails.
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	unsigned int sum = 0;
	/* */
	if (n == 0)
	{
		return (0);
	}
	va_list args;
	/* */
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int var = va_arg(args, int);

		sum += var;
	}
	va_end(args);
	return (sum);
}
