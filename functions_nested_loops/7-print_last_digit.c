#include "main.h"
/**
 * print_last_digit - prints the last digit of int
 * @n: integer
 * Return: int d (Success)
 */
int print_last_digit(int n)
{
	int d;

	d = (n % 10);
	if (d < 0)
	{
		d = (-1 * d);
	}
	_putchar('0' + d);
	return (d);
}
