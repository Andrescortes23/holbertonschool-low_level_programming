#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - to print a name
 *@name: name we want to print
 *@f: the pointer to function we want to use with the name
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
