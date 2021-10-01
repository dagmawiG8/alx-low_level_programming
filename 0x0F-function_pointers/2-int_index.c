#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - fills memory with a constant byte
  * @array: integer array
  * @size: array size
  * @cmp: is funtion pointer
  * Return: a void pointer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);

		i++;
	}
	return (-1);

}
