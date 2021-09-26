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
		while (x < height)
		{
			twoD[x] = malloc(height * sizeof(int));

			if(!twoD[x])
			{
				free(twoD[x]);
				return (NULL);
			}

			x++;
		}
		x = y = 0;
		while (x < height)
		{
			while (x < width)
			{
				twoD[x][y] = 0;
				y++;
			}
			x++;
		}
	}
	return (twoD);
}
