#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * Description: computes the sum of all multiples of 3 and 5
 * Return: returns 0
 */

int main(void)
{
	int visit;
	int sum = 0;

	for (visit = 0; visit < 1024; visit++)
	{
		if (visit % 3 == 0 || visit % 5 == 0)
		{
			sum += visit;
		}
	}

	printf("%d", sum);
	printf("\n");
	return (0);
}
