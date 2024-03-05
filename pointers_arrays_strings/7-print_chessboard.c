#include "main.h"
/**
 * print_chessboard - Prints a chessboard ( '_' )
 * @a: array of pieces
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int apr;
	int arr;

	for (apr = 0; apr < 8; apr++)
	{
		for (arr = 0; arr < 8; arr++)
			_putchar(a[apr][arr]);
		_putchar('\n');
	}
}
