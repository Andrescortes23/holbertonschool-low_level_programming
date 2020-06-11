/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
#include<stdio.h>
int main(void)
{
	char chartype;
	int inttype;
	long int longint;
	long long int dolgit;
	float floattype;
	{
		printf("Size of char: %ld bytes\n", sizeof(chartype));
		printf("Size of int: %ld bytes\n", sizeof(inttype));
		printf("Size of long int: %ld bytes\n", sizeof(longint));
		printf("Size of long long int: %ld bytes\n", sizeof(dolgit));
		printf("Size of float: %ld bytes\n", sizeof(floattype));
	}
	return (0);
}
