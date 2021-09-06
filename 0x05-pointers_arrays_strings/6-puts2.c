#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
