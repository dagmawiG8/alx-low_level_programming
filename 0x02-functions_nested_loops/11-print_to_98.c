#include <unistd.h>
#include <stdio.h>
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
			printf("%d", recursion);

			if (recursion != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n > 98)
	{
		for (recursion = n; recursion >= 98; recursion--)
		{
			printf("%d", recursion);

			if (recursion != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}

	printf("\n");

}
