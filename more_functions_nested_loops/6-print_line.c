#include "main.h"
/**
 * print_line - Prints a line the length of n
 * @n: length of line
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	for ( ;n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
