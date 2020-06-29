#include "holberton.h"
/**
 *print_chessboard - print chessboard
 *@a: pointer to an array
 *Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int bos, bov;

	for (bos = 0; bos < 8; bos++)
	{
		for (bov = 0; bov < 8; bov++)
		{
			_putchar (a[bos][bov]);
		}
		_putchar ('\n');
	}
}
