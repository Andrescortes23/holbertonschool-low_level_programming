#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_char - to print chars
 *@param: elemnt to print
 *Return: void
 */
void print_char(va_list param)
{
	printf("%c", va_arg(param, int));
}

/**
 *print_integer - to print integers
 *@param: element to print
 *Return: void
 */
void print_integer(va_list param)
{
	printf("%d", va_arg(param, int));
}

/**
 *print_float - to print floats nums
 *@param: elemnt to print
 *Return: void
 */
void print_float(va_list param)
{
	printf("%f", va_arg(param, double));
}

/**
 *print_string - to print strings
 *@param: elemnt to print
 *Return: void
 */
void print_string(va_list param)
{
	char *asc = va_arg(param, char *);

	if (asc == NULL)
		asc = "(nil)";
	printf("%s", asc);
}


/**
 *print_all - to print anything
 *@format: types of variables to print
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list param;
	int index1 = 0, index2 = 0;
	char *asc = "";

	funcs elementstype[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(param, format);
	while (format && format[index1])
	{
		while (elementstype[index2].x)
		{
			if (elementstype[index2].x == format[index1])
			{
				printf("%s", asc);
				elementstype[index2].func(param);
				asc = ", ";
			}
			index2++;
		}
		index2 = 0;
		index1++;
	}
	printf("\n");
	va_end(param);
}
