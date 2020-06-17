#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }
	/**
	 *You need to add i++ to i become gigher than 10 and the loop ends
	 */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
