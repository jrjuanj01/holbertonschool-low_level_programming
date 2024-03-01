#include "main.h"
/**
 * string_toupper - Converts to uppercase all lowercase charcters
 * @str : string being verified
 * Return: string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	for ( ; *ptr != '\0'; ptr++)
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
	return (ptr);
}
