#include "holberton.h"
/**
 *set_string - to set a pointer to another pointer
 *@s: pointer to a pointer
 *@to: pointer to be modify
 *Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
