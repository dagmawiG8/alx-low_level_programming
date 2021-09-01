#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - prints n to 98
 * @n: integer argument
 * Description:
 * Return: returns nothing
 */

void print_to_98(int n)
{
	int recursion;

	if (n < 98)
	{
		for (recursion = n; recursion <= 98; recursion++)
		{
			_putchar(recursion + '0');

			while (recursion != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (recursion = n; recursion >= 98; recursion--)
		{
			_putchar(recursion + '0');

			while (recursion != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 98)
	{
		_putchar(n + '0');
	}

	_putchar('\n');

}
