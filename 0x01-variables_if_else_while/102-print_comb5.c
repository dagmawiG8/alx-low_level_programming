#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: all available pair-pair combination of digits
 * Return: returns zero after printing all
 */

int main(void)
{
	int i;
	int j;

/**     for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if ((digit1 != 7) || (digit2 != 8) || (digit3 != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
*/

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
		
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}

	putchar('\n');

	return (0);
}
