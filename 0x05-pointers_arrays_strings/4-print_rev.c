#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - checks for uppercase character
 * @s: the character to be checked
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
