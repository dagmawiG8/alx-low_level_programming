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
	int counter = 3;
	long int next;

	printf("%ld, ", a);
	printf("%ld, ", b);

	while (counter <= 50)
	{
		next = a + b;
		printf("%ld", next);

		if (counter != 50)
		{
			printf(",");
			printf(" ");
		}
		a = b;
		b = next;
		counter++;
	}

	printf("\n");
	return (0);
}
