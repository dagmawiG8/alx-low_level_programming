#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_sign - test for character or not
 * @n: the character to be tested
 * Desciption: test for alphanumeric
 * Return: On success 1 , 0 and -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
        else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
