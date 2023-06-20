#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: the variable
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lst_digit = n % 10;

	if (lst_digit < 0)
		lst_digit *= -1;

	_putchar(lst_digit + '0');

	return (lst_digit);
}
