#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase'
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar();
	return (0);
}
