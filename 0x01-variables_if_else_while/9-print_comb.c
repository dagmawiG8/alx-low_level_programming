#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: all available combination of digits
 * Return: returns zero after printing all
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
