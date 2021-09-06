#include "main.h"
#include <string.h>

/**
 * print_rev - checks for uppercase character
 * @s: the character to be checked
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s);  str[i] != '\0'; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
