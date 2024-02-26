#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 - 9 except 2 & 4
 *
 * Return; Always 0 (Success)
 */
void print_most_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		if (d != '2' && d != '4')
			_putchar(d);
	_putchar('\n');
}
