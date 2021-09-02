#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */


void print_times_table(int n)
{
	int x, y;

	for (x = 0; x <= n; x++)
        {
		for (y = 0; y <= n; y++)
		{
			if (y == 0)
			{
				printf("%d", (x * y));
			}

			else if (y != 0)
			{
				if ((x * y) < 10)
				{
					printf(",");
					printf(" ");
					printf(" ");
					printf("%d", (x * y));
				}
				else if ((x * y) >= 10)
				{
					printf(",");
					printf(" ");
					printf("%d", (x * y));
				}
			}
		}
		printf("\n");
	}
}

