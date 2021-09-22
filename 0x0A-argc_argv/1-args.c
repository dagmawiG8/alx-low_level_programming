#include <stdio.h>

/**
  * main - print the number of argument
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */

int main(int argc, char *argv[])
{
	if (argv[argc - 1] != '\0')
		printf("%d\n", argc);

	return (0);
}
