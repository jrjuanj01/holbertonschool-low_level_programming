#include "main.h"
/**
 * print_sign - specifies the sign of n
 * @n: integer being verifyied
 * Return: -1, 0, or 1 (Success)
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	return (0);
}
