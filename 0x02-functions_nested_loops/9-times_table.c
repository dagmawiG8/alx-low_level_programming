#include "main.h"

/**
 * times_table - prints factors of 9
 * Description: displaying table of 9s table
 * Return: no return value
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar((x * y) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
