#include "main.h"
#include <stdlib.h>

/**
 * _strcat - 
 * @dest, @src: an argument character
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	char str1[100], str2[100];

	*dest = str1;
	*src = str2;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (str1);
}
