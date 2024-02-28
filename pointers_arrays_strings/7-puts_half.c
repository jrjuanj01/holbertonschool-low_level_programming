#include "main.h"
/**
 * puts_half - Prints half of the string given
 * @str: The string being evaluated
 * Return: void
 */
void puts_half(char *str)
{
	int ttl;
	int mid;

	for (ttl = 0; str[ttl] != '\0'; ttl++)
	{}
	if (ttl % 2 == 1)
	{
		for (mid = ((ttl - 1) / 2); mid <= ttl ; mid++)
			_putchar(str[mid]);
	}
	if (ttl % 2 == 0)
	{
		for (mid = (ttl / 2); mid <= ttl ; mid++)
			_putchar(str[mid]);
	}
	_putchar('\n');
}

