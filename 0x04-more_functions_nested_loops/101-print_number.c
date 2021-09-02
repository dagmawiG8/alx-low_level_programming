#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int intermediate;

	if (n < 0)
	{
		intermediate = -n;
		_putchar('-');
	} else
	{
		intermediate = n;
	}

	_putchar(intermediate + '0');
}
