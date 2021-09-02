#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int max(void)
{
	long int n;
	long int max;
	long int i, j;
	long int counter;

	n = 612852475143;

	for (i = 0; i <= n; i++)
	{
		if (n % i == 0)
		{
			counter = 0;

			for (j = 0; j <= i; j++)
			{
				if (i % j == 0)
					counter++;
			}

			if(counter <= 2)
			{
				return (i);
			}
		}
	}
}

int main(void)
{
	printf("%ld\n", max());

	return (0);
}
