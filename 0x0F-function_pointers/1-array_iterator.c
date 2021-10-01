#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - fills memory with a constant byte
  * @size: size of the array
  * @array: integer array
  * @action: is a funtion pointer
  * Return: nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array = NULL || action = NULL || size = 0)
	{
		return;
	}
	else
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
