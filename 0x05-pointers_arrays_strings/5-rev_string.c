#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - checks for uppercase character
 * @s: the character to be checked
 * Return: none
 */

void rev_string(char *s)
{
	char tmp;
	int i, len, Ilen;

	len = 0, Ilen = len - 1;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[Ilen];
		s[Ilen--] = tmp;
	}
}
