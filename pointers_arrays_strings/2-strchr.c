#include "main.h"
/**
 * _strchr - Finds a given charactrer
 * @s: string being evaluated
 * @c: Character being searched for
 * Return: *s or NULL
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return ('\0');
	for (; (*s != '\0') && (c != '\0'); s++)
	{
		if (*s == c)
			return (s);
	}
	return ('\0');
}
