#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each element of an array
 * @size:  is the size of the array
 * @action: is a pointer to the function you need to use
 * @array: array
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
