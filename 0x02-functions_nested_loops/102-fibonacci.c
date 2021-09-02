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
	int counter = 1;
	long int next;

	printf("%d, ", a);
	printf("%d, ", b);

	while (counter <= 50)
	{
		next = a + b;
		printf("%d, ", next);

		a = b;
		b = next;
		counter++;
	}

	printf("\n");
	return (0);
}
