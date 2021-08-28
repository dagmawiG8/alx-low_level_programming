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
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (m == 0)
		printf("Last digit of %d is and is 0\n", n);
	else if ((m < 6) && (m == 0))
		printf("Last digit of %d is and is less than 6 and not 0\n", n);

	return (0);
}
