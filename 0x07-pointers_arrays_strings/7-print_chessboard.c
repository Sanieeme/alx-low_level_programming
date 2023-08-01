#include "main.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row = 8, col = 8, i, j;

	for (i = 0 ; i < row ; i++)
	{
		for (j = 0 ; j < col ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}

}
