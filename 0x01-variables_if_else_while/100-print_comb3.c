#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: all available paired combination of digits
 * Return: returns zero after printing all
 */

int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');
		
			if ((digit1 != 8) || (digit2 != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
