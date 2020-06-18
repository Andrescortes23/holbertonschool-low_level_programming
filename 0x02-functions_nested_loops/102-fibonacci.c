#include <stdio.h>
/**
 *main - to 50
 *Return: 0
 */
int main(void)
{
	long int f1, f2, temp;
	int i = 0;

	f2 = 1;
	temp = 0;
	f1 = 0;
	while (i < 50)
	{
		temp = f2;
		f2 = f1 + f2;
		f1 = temp;
		printf("%ld", f2);
		i++;
		if (i <= 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
