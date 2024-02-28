#include "main.h"
/**
 * puts2 - Prints every other element in a string
 * @str: String being printed
 * Retirn: void
 */
void puts2(char *str)
{
		int ttl;
		int idx;

	for (ttl = 0; str[ttl] != '\0'; ttl++)
	{
	}
	for (idx = 0; idx < ttl; idx += 2)
		_putchar(str[idx]);
	_putchar('\n');
}
