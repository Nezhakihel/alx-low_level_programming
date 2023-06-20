#include "main.h"

/**
 * print_to_98 - Entry point
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be
 * @n: start count
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");

		}
	}
	printf("\n");

}
