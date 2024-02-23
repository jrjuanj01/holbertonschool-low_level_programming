#include "main.h"

/**
 * jack_bauer - prints from 0 to 23:59
 *
 * Return: Alawys 0 (Success)
 */
void jack_bauer(void)
{
	char h1 = '0';
	char h2 = '0';
	char m1 = '0';
	char m2 = '0';

	for (m2 = '0'; m2 <= '9'; m2++)
	{
		if (h1 == '2' && h2 == '4')
		{
			break;
		}
		_putchar(h1);
		_putchar(h2);
		_putchar(':');
		_putchar(m1);
		_putchar(m2);
		_putchar('\n');
		if (m2 == '9')
		{
			m2 = '/';
			m1++;
		}
		if (m1 == '6')
		{
			m1 = '0';
			h2++;
		}
		if (h2 == ':')
		{
			h2 = '0';
			h1++;
		}
	}
}
