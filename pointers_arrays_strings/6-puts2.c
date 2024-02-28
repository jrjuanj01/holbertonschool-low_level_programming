#include "main.h"
/**
 * puts2 - Prints every other element in a string
 * @str: String being printed
 * Retirn: void
 */
void puts2(char *str)
{
		int ln ;

	for (ln = 0; str[ln] != '\0'; ln++, ln++)
		_putchar(str[ln]);
	_putchar('\n');
}
