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
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
