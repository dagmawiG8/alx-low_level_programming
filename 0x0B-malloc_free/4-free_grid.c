#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - fills memory with a constant byte
  * @grid: matriz
  * @height: size of the rows
  * Return: nothing
  */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
