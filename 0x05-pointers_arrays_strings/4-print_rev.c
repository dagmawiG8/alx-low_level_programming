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

	strrev(s);
	_putchar('\n');
}
