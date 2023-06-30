#include "main.h"

/**
 * infinite_add - function add to nb
 * @n1: nb1
 * @n2: nb2
 * @r : buffer that the function will use to store the result
 * @size_r: buffer size
 * Return : pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;

	/* size of n1 */
	while (n1[i] != 0)
		i++;
	/* size of n2 */
	while (n2[j] != 0)
		j++;
	i--;
	j--;
	/* if size of n1 || n2 less than size_r return 0 */
	if ((i  > size_r) || (j > size_r))
		return (0);
	else
		r = n1 + n2;
	return (r);
}
