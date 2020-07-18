#include "3-calc.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}

/**
 *
 *
 *
 *
 */
int op_sub(int a, int b)
{
	int rest = (a - b);
	return (rest);
}

/**
 *
 *
 *
 *
 */
int op_mul(int a, int b)
{
	int mult = (a * b);
	return (mult);
}

/**
 *
 *
 *
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *
 *
 *
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
