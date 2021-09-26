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
	unsigned int long i = 0, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	s = malloc((sizeof(char) * size) + 1);

	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
