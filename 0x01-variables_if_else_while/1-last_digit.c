/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	l = n % 10;

		printf("Last digit of");

		printf(" %d", n);

		printf(" is");


	if (l > 5)
	{
		printf(" %d and is greater than 5\n", l);
	}
	else if (l == 0)
	{
		printf(" %d and is 0\n", l);
	}
	else if (l < 6)
	{
		printf(" %d and is less than 6 and not 0\n", l);
	}


	return (0);
}
