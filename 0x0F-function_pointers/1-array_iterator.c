#include <stdlib.h>
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
	unsigned int i;

	if (array = NULL || action = NULL || size = 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
