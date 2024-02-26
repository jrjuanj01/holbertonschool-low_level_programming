#include "main.h"
/**
 * print_square - prints a square in # sign
 * @size: it is the size of the square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int h;
	int w;

	if (size <= 0)
		_putchar('\n');
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
			_putchar('#');
		_putchar('\n');
	}
}
