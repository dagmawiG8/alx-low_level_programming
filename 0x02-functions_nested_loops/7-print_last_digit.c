#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_last_digit - test for character or not
 * @n: the character to be tested
 * Desciption: test for alphanumeric
 * Return: On success 1 , 0 and -1.
 */

int print_last_digit(int n)
{
	int lastD;

	lastD = _abs(n % 10);
	_putchar (lastD + '0');

	return (lastD);
}
