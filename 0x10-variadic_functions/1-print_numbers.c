#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - to print parameters
 *@separator: string to print between numbers
 *@n: number of parameters
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int index;

	va_start(param, n);

	if (separator != NULL)
	{
		for (index = 0; index < n; index++)
		{
			printf("%i", va_arg(param, int));
			if (index < n - 1)
				printf("%c", *separator);
		}
		printf("\n");
	}
	else
		printf("%i", va_arg(param, int));
	va_end(param);
}
