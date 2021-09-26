#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Return a pointer to a 2 dimensional array of integers.
  * @width: is the width of a bidementional array
  * @height: is the height of a bidimentional array
  * Return: an address
  */

int **alloc_grid(int width, int height)
{
	int x = 0, y = 0, **twoD;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		twoD = malloc(height * sizeof(int *));
		while (i < height)
		{
			twoD[i] = malloc(height * sizeof(int));

			if(!twoD[i])
			{
				free(twoD[i]);
				return (NULL);
			}

			i++;
		}
		i = j = 0;
		while (i < height)
		{
			while (j < width)
			{
				twoD[i][j] = 0;
				j++;
			}
			i++;
		}
	}
	return (twoD);
}
