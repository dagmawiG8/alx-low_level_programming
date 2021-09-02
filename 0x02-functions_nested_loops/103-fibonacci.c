#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum = 2; /* The first even */
	long int next;

        while (next < 4000)
	{
		next = a + b;

		if (next % 2 == 0)
		{
			sum += next;
		}
		
		a = b;
		b = next;
	}
	
	printf("%ld", sum)
	printf("\n");
	return (0);
}
