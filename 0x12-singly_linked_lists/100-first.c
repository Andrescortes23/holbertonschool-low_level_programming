#include <stdio.h>
/**
 *turtle - to print before main
 *Return: void
 */
void turtle(void) __attribute__ ((constructor));
void turtle(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
