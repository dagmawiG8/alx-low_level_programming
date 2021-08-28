#include <stdio.h>
#include <unistd.h>

/**
 * main - entry
 * Description: sorts in increasing order [single digits]
 * Return: returns zero after printing all
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);

	printf("\n");

	return (0);
}
