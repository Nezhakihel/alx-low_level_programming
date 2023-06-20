#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_1, f1_2, f2_1, f2_2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f2 = sum;
	}

	f1_1 = f1 / 10000000000;
	f2_1 = f2 / 10000000000;
	f1_2 = f1 % 10000000000;
	f2_2 = f2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h1 = f1_1 + f2_1;
		h2 = f1_2 + f2_2;
		if (f1_2 + f2_2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");

		f1_1 = f2_h1;
		f1_2 = f2_h2;
		f2_1 = h1;
		f2_2 = h2;
	}
	printf("\n");
	return (0);
}
