#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * Description:
 * Return:
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

	printf("%d \n", sum);
	return (0);
}
