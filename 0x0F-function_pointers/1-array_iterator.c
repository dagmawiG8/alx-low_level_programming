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
	size_t i = 0;

	if (array = NULL || action = NULL || size = 0)
	{
		;
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
