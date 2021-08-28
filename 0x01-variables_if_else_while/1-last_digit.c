#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: testing whether randomly generated number is negative or not
 * Return: returns zero
 */

int main(void)
{
	int n, m;

	srand(time(0));
	m = rand() - RAND_MAX / 2;
	n = m % 10;

	if (n > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is and is 0\n", n);
	else if ((n < 6) && (n == 0))
		printf("Last digit of %d is and is less than 6 and not 0\n", n);

	return (0);
}
