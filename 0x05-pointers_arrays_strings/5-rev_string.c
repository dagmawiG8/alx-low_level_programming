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
	int i, j = 0;
	char *temp;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		temp[j] = s[i];
		j++;
	}

	for (i = 0; i < strlen(temp); i++)
	{
		s[i] = temp[i];
	}
}
