#include <stdio.h>
#include <stdlib.h>

int multiply(int a, int b);

/**
  * main - print the multiplication of two arguments
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */

int main(int argc, char *argv[])
{

	int i, j, p;

	if (argc != 3)
		printf("Error\n");

	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		p = multiply(i,j);
		printf("%d\n", p);
	}

	return (0);
}

/**
  * power - multiplies a and b
  * @a: integer
  * @b: integer
  * Return: a product
  */

int multiply(int a, int b)
{
	return (a*b);
}
