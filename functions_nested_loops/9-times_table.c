#include "main.h"
/**
 * times_table - displays the multiplications table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int a;
	int b;
	int mult;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mult = (a * b);
			if ((((mult / 10) + '0') == '0') && (b == 0))
			{
				_putchar((mult % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if ((((mult / 10) + '0') == '0') && (b < 9))
			{
				_putchar(' ');
				_putchar((mult % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if ((((mult / 10) + '0') > '0') && (b < 9))
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (b == 9)
			{
				if (((mult / 10) + '0') > '0')
				{
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (((mult / 10) + '0') == '0')
				{
					_putchar(' ');
					_putchar((mult % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
