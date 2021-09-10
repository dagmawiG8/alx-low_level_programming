#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int b[120];
	j = n - 1;

	while (j >= 0)
	{
		for (i = 0; i < n; i++)
		{
			b[j] = a[i];
			j--;
		}
	}
}
