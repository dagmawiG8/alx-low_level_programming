#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - fills memory with a constant byte
  * @size: is the size of the pointer
  * @c: is a letter
  * Return: NULL or a pointer
  */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(sizeof(char) * size);

	if (size == 0 || !str)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			str[i] = c;
			i++;
		}
	}
	return (str);
}
