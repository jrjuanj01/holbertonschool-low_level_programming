#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int rep;
	char az;

	for (rep = 0; rep <= 9; rep++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
	}
	_putchar('\n');
}
