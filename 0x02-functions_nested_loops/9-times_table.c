#include <unistd.h>
#include "main.h"

/**
 * times_table -
 * @c: The character to print
 * Description:
 * Return: 
 */

void times_table()
{
	int x, y;

	for (x = 0; x < 10: x++)
	{
		for(y = 0; y < 10; y++)
		{
			_putchar((x * y) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
