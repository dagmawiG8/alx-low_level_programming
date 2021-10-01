#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - fills memory with a constant byte
  * @ac: is the size of the pointer
  * @av: is a letter
  * Return: an address
  */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, size = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}

	str = malloc((sizeof(char) * size) + ac + 1);
	if (!str)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		  str[k] = '\n';
		  k++;
	}
	str[k] = '\0';
	return (str);
}
