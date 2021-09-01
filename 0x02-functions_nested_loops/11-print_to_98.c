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

	for (recursion = n; recursion <= 98; recursion++)
	{
		_putchar(recursion);
	}
	_putchar('\n');
}
