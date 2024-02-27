#include "main.h"
/**
 * print_triangle - prints a triangle using the # sign
 * @size: the size of the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int ln;
	int spc;
	int pnd;

	if (size <= 0)
		_putchar('\n');
	for (ln = 1; ln <= size; ln++)
	{
		for (spc = size; spc > ln; --spc)
			_putchar(' ');
		for (pnd = 0; pnd < ln; ++pnd)
			_putchar('#');
		_putchar('\n');
	}
}
