#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(gett, int));

		if (separator != NULL && i != 0)
			printf("%s", separator);
	}
	var_end(li);
	printf("\n");
}
