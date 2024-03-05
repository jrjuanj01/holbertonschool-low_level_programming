#include "main.h"
/**
 * _strchr - Finds a given charactrer
 * @s: string being evaluated
 * @c: Character being searched for
 * Return: *s or NULL
 */
char *_strchr(char *s, char c)
{
	while ((*s != c) && (*s != '\0'))
	{
		s++;
	}
	return (s);
}
