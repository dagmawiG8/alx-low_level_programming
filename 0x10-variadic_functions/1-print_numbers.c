#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list li;
	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(li, char *);
		if (str == NULL)
		{
			return;
		}

		if (separator == NULL)
		{
			printf("%s", str);
		}
		else if (separtor != NULL && i = 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");
	var_end(li);
}
