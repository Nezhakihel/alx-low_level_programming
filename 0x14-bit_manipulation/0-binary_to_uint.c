#include "main.h"

/**
 * sizeofbinary - find the length of b
 * @b    : is pointing to a string
 * Return: nb
 */

int sizeofbinary(const char *b)
{
	int size = 0;
	while (*b != '\0')
	{
		size++;
		b++;
	}
	return (size);
}

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b    : is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * ........there is one or more chars in the string b that is not 0 or 1
 * ........b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int size_of_binary;
	double exponent;
	int j = 0;
	unsigned int resulta = 0;
	char one_char[2];
	/* */
	if (b == NULL){
		return (0);
	}
	size_of_binary = sizeofbinary(b);
	exponent = size_of_binary - 1;
	
	for (j = 0; j < size_of_binary; j++)
	{
		if ((b[j]!= '0') && (b[j] != '1'))
		{
			return (0);
		}
		one_char[0] = b[j];
		one_char[1] = '\0';
		resulta = resulta + ((atoi(one_char)) * (int)(pow(2, exponent)));
		exponent--;
	}
	return (resulta);
}
