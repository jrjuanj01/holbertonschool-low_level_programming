#include "main.h"
/**
 * _strchr - Finds a given charactrer
 * @s: string being evaluated
 * @c: Character being searched for
 * Return: *s or NULL
 */
char *_strchr(char *s, char c)
{
	while ((*s != '\0') && (*s != c))
		s++;
	if (*s == c)
		return (s);
	if (*s == '\0')
		return ('\0');
	return ('\0');
}
