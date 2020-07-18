#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - summ all parameters
 *@n: number of parameters
 *Return: the summ of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	int add = 0;
	unsigned int index;

	va_start(param, n);

	for (index = 0; index < n; index++)
	{
		add += va_arg(param, const unsigned int);
	}
	va_end(param);

	return (add);
}
