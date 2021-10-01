#include "function_pointers.h"

/**
  * print_name - fills memory with a constant byte
  * @name: is the name to be printed
  * @f: is a funtion pointer
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		;
	else
		f(name);
}
