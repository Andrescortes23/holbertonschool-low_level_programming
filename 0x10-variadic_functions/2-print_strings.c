#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - to print anything
 *@separator: string to print between the strings
 *@n: number of strings
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int index;
	char *a;


	if (n < 1)
		printf("\n");
	else
	{
		va_start(param, n);

		for (index = 0; index < n; index++)
		{
			a = va_arg(param, char *);
			if (a != NULL)
				printf("%s", a);
			else
				printf("(nil)");
			if (separator != NULL && index < (n - 1))
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(param);
}
