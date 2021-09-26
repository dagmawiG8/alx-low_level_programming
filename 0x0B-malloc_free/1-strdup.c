#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - fills memory with a constant byte
  * @str: is the size of the pointer
  * Return:  NULL or an address
  */

char *_strdup(char *str)
{
	char *s;
	int i = 0, size;

	if (s == NULL)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * sizeof(str));

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < sizeof(str))
	{
		s[i] = str [i];
		i++;
	}
	s[i] = '\0';
	return (s);
}