#include "main.h"
/**
 * print_chessboard - print the current state of the game board
 * @a: the index of the game board
 * return: the number of characters
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
