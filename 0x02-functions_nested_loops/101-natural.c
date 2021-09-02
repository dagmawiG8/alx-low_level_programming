#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
int main(void)
{
	int visit;
	inr sum = 0;

	for (visit = 0; visit < 1024; visit++)
	{
		if (visit % 3 == 0 || visit % 5 == 0)
		{
			sum += visit;
		}
	}

	printf("%d \n", sum);

}
