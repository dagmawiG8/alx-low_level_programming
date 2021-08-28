#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: testing whether randomly generated number is negative or not
 * Return: returns 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n>0)
		printf("%s is negative", n);
	else if (n<0)
		printf("%s is positive", n);
	else 
		printf("%s is zero", n);

	return (0);
}
