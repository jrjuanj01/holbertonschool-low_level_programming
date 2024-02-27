#include "main.h"
/**
 * print_rev - Prints thr reverse of the strin it was given
 * @s: This is the string being evaluated
 * Return: Void
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	for (l = (l - 1); l >= 0; --l)
		_putchar(s[l]);
	_putchar('\n');
}
