#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - fills memory with a constant byte
  * @s1: string 1 address
  * @s2: string 2 address
  * Return: an address of a third string
  */

char *str_concat(char *s1, char *s2)
{
	char *str;

	unsigned int long i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str = malloc((sizeof(s1) * sizeof(s1)) + (sizeof(s2) * sizeof(s2)) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	while (i < (sizeof(s1) + sizeof(s2)))
	{
		if (i >= sizeof(s1))
		{
			str[i] = s2[i - sizeof(s1)];
		}
		else
		{
			str[i] = s1[i];
		}
		i++;
	}

	str[i] = '\0';
	return (str);
}

