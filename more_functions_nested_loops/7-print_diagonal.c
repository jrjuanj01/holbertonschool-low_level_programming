#include "main.h"
/**
 * print_diagonal - prints a diagonal line of nth length
 * @n: the length of the line
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int ln;
	int spc;

	if (n > 0)
	{
		for (ln = 0; ln < n; ln++)
		{
			for (spc = ln; spc > 0; --spc)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
