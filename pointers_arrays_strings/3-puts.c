#include "main.h"
/**
 * _puts - Prints a strind followed by a nwe line
 * @str: String being printed out
 * Return: string
 */
void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
		_putchar(str[l]);
	_putchar('\n');
}
