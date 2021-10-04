#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	var_end(li);
	printf("\n");
}
