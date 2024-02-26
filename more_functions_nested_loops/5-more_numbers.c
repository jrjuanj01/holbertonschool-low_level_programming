#include "main.h"
/**
 * more_numbers - prints from 0 - 14 ten times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int rep;
	int num;

	for (rep = 0; rep <= 9; rep++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
