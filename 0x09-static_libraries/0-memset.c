#include "main.h" 
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: byte to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	for ( ; i < n; i++)
	{
		s[i] = '\0';
	}

	return (s);
}
