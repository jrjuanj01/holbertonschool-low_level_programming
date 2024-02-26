#include "main.h"
/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return; Always 0 (Success)
 */
void print_numbers(void)
{
	int d;

	for (d = '0', d <= '9', d++)
		_putchar(d);
	_putchar('\n');
}
